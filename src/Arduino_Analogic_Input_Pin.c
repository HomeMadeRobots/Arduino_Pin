#include "Arduino_Analogic_Input_Pin.h"


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void Arduino_AIP__Analogic_Pin__Get_Voltage(
    const Arduino_Analogic_Input_Pin* Me,
    T_Voltage* voltage )
{
    *voltage = analogRead( Me->Arduino_Pin_Id );
}