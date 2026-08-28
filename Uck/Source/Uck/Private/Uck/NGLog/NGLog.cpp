#include "Uck/NGLog/NGLog.h"

void UNGLog::call_Log(const FString& _Value)
{
	mDEVMSG(LOG_ON, _Value);
}

bool UNGLog::call_StartNGLog()
{
	return false;
}

bool UNGLog::call_EndNGLog(bool _NoteWarns, bool _NoteErrors, bool _NoteCrits)
{
	return false;
}

bool UNGLog::call_HealthCheck(bool _NoteWarns, bool _NoteErrors, bool _NoteCrits)
{
	NGLog builder;
	builder << mDBRACED("132654");
	GLog->Log(builder.ToString());
	return false;
}

TWideStringBuilder<1024>& UNGLog::fn_GetNGLog()
{
	static TWideStringBuilder<1024> StaticLogBufferHere;
	return StaticLogBufferHere;
}

bool UNGLog::fn_CheckNGLog()
{
	if ("Basics")
	{
		NGLog& data = fn_GetNGLog();
		data << WIDETEXT("First Section");
		data << mLINE(mBRACED(L"Second Section"));
		data << mBRACED(WIDETEXT("фыва"));
		LogInternal(data);

	}
	if ("Macro")
	{
		mDEVMSG(LOG_ON, mLINE(mDBRACED("Begin log section")));
	}
	if ("Macro + Types")
	{
		mDEVMSG(LOG_ON, 1);
		mDEVMSG(LOG_ON, 1.f);
		mDEVMSG(LOG_ON, 1.l);
		mDEVMSG(LOG_ON, "1.l");
		mDEVMSG(LOG_ON, '1');
	}
	return true;
}


void UNGLog::LogInternal(NGLog& _Logger)
{
	GLog->Log(const_cast<NGLog&>(_Logger).ToString());
	_Logger.Reset();
}

UNGLog::WArray& UNGLog::fn_GetWArray()
{
	static WArray StaticWarrayHere;
	return StaticWarrayHere;
}

UNGLog::EArray& UNGLog::fn_GetEArray()
{
	static EArray Var_Warray;
	return Var_Warray;
}

UNGLog::CArray& UNGLog::fn_GetCArray()
{
	static CArray StaticCArrayHere;
	return StaticCArrayHere;
}

void UNGLog::call_RegisterWarning(bool _Log, const FString& _Message)
{
	if (_Log)
	{
		mDEVMSG(LOG_ON, mLINE(mDBRACED("--- Uck::Warning: ")<<mBRACED(_Message)));
	}
	fn_GetWArray().Add(_Message);
}

void UNGLog::call_RegisterError(bool _Log, const FString& _Message)
{
	if (_Log)
	{
		mDEVMSG(LOG_ON, mLINE(mDBRACED("--- Uck::Error: ") << mBRACED(_Message)));
	}
	fn_GetEArray().Add(_Message);
}

void UNGLog::call_RegisterCritical(bool _Window, bool _Log, const FString& _Message)
{
	if (_Log)
	{
		mDEVMSG(LOG_ON, mLINE(mDBRACED("--- Uck::Critical: ") << mBRACED(_Message)));
	}

	fn_GetCArray().Add(_Message);

	if (_Window)
	{
		call_ShowStopperMessage(_Message);
	}
}

void UNGLog::call_ShowStopperMessage(const FString& _Message)
{

}


