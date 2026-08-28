#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Misc/StringBuilder.h"
#include "NGLog.generated.h"

using NGLog = TWideStringBuilder<1024>;

#define U5_DO_DEBUG_LOG 1
#ifndef U5_DEBUG_ENABLE
#define U5_DEBUG_ENABLE U5_DO_DEBUG_LOG
#endif

// inline NGLog& operator << (NGLog& _Stream, float _Value) { return _Stream.Appendf(WIDETEXT("%f"), _Value); }
// inline NGLog& operator << (NGLog& _Stream, double _Value) { return _Stream.Appendf(WIDETEXT("%f"), static_cast<double>(_Value)); }

UCLASS()
class UCK_API UNGLog : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Uck")
	static void call_Log(const FString& _Value);

public: // Module.

	static bool call_StartNGLog();
	static bool call_EndNGLog(bool _NoteWarns, bool _NoteErrors, bool _NoteCrits);
	static bool call_HealthCheck(bool _NoteWarns, bool _NoteErrors, bool _NoteCrits);
	
public: // Logging.

	static NGLog& fn_GetNGLog();
	static bool fn_CheckNGLog();

	static void LogInternal(NGLog& _Logger);

public: // Warnings.

	using WArray = TArray<FString>;
	static WArray& fn_GetWArray();

	UFUNCTION(BlueprintCallable, Category = "Uck")
	static void call_RegisterWarning(bool _Log, const FString& _Message);


public: // Errors.
	using EArray = TArray<FString>;

	UFUNCTION(BlueprintCallable, Category = "Uck")
	static void call_RegisterError(bool _Log, const FString& _Message);

	static EArray& fn_GetEArray();

public: // Criticals.
	using CArray = TArray<FString>;
	static CArray& fn_GetCArray();

	UFUNCTION(BlueprintCallable, Category = "Uck")
	static void call_RegisterCritical(bool _Window, bool _Log, const FString& _Message);

public:
	UFUNCTION(BlueprintCallable, CustomThunk, meta = (Keywords = "ScriptTrace"))
	static void call_ShowStopperMessage(const FString& _message);
	DECLARE_FUNCTION(execcall_ShowStopperMessage)
	{
		FString message{};
		Stack.StepCompiledIn<FProperty>(&message);

		P_FINISH;
		const static FText messageDialogTitle = FText::FromString("Critical error.");
		const FString trace = Stack.GetStackTrace();
		const FString fullMessage = message + "\n" + trace;
		const FText messageDialogBody = FText::FromString(fullMessage);
		FMessageDialog::Open(EAppMsgType::Ok, messageDialogBody, messageDialogTitle);
	}
};

UCLASS()
class UCK_API UNGLog_FLib : public UNGLog
{
	GENERATED_BODY()
public:
	enum LOG_E
	{
		LOG_OFF = 0,
		LOG_ON = 1,
		LOG_CRITICAL = 1,
		LOG_REQUIRED = 1,
		LOG_E_
	};
};

class ULogImplicit
{
	bool enable;
public:
	explicit ULogImplicit(UNGLog_FLib::LOG_E _e) : enable(_e == UNGLog_FLib::LOG_ON) {}
	operator bool() { return enable; }
};

#ifdef WITH_EDITOR

#define mDEBGOUT(enable, text) \
{ \
	if(ULogImplicit(UNGLog_FLib::LOG_E::enable)) \
	{ \
		NGLog& tmp = UNGLog_FLib::fn_GetNGLog();\
		tmp << text;\
		UNGLog_FLib::LogInternal(tmp);\
	} \
}

#define mU5_FUNCTION(enable) { mU5_DEBUGOUT(enable, "F:"<<__func__) }; // 
#define mU5_FUNCTIONP(enable) { mU5_DEBUGOUT(enable, "F:"<<__FUNCSIG__) };
#define mU5_FUNCMESS(enable, text) \
	{ \
	if (enable && U5_DO_DEBUG_LOG && U5_DEBUG_ENABLE) \
	{ \
		mU5_DEBUGOUT(enable, mDBRACED( __func__) << ": " << text); \
	} \
}

#define mU5_DEPRECATED() \
{ \
	if (enable && U5_DO_DEBUG_LOG && U5_DEBUG_ENABLE) \
	{ \
		mU5_DEBUGOUT(true, ( mDBRACED(__func__) << ": IS DEPRECATED.") ); \
	} \
}

#else

#define mU5_FUNCTION(enable)
#define mU5_FUNCTIONP(enable)
#define mU5_FUNCMESS(enable, text)
#define mU5_DEPRECATED()
#define mDEBGOUT(enable, text)

#endif // WITH_EDITOR

#define mWRONGDEVMSG(text)	mDEBGOUT(true, text)
#define mDEVMSG(term, text)	mDEBGOUT(term, text)
#define mQUOTED(text)		" [" << text << "] "
#define mVAR(text)			" [" << #text##": " << text << "] "
#define mSPASED(text)		" " << text << " "
#define mBRACED(text)		" <" << text << "> "
#define mDBRACED(text)		" <<" << text << ">> "
#define mSBRACED(text)		" [" << text << "] "
#define mRBRACED(text)		" (" << text<<  ") "
#define mQBRACED(text)		' "' << text << '" '
#define mLINE(text)			text << LINE_TERMINATOR
#define mDNAME(object)		UKismetSystemLibrary::GetDisplayName(object)
#define xD(text) (text)

