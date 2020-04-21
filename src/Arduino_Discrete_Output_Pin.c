#include "Arduino_Discrete_Output_Pin.h"

#include "Arduino.h"


/*============================================================================*/
/* Component_Operations */
/*============================================================================*/
void Arduino_DOP__Initialize( const Arduino_Discrete_Output_Pin* Me )
{
    pinMode( Me->Arduino_Pin_Id, OUTPUT );
}


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void Arduino_DOP__Discrete_Pin__Set_Level( 
    const Arduino_Discrete_Output_Pin* Me,
    E_IO_Level level )
{
    if( level==IO_LEVEL_LOW )
    {
        digitalWrite( Me->Arduino_Pin_Id, LOW );
    }
    else
    {
        digitalWrite( Me->Arduino_Pin_Id, HIGH );
    }
}
