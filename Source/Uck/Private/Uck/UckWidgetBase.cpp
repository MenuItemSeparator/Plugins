#include "Uck/UckWidgetBase.h"

void UUckWidgetBase::fn_WidgetActivate_Implementation(bool _Value)
{
	if (_Value != Var_IsActiveNow && Var_EnableAutoCollapse)
	{
		
	}
	Var_IsActiveNow = _Value;

}
