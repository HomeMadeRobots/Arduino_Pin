#include "Arduino_Interruption_Pin.h"

#include "Arduino.h"

/*============================================================================*/
/* Component_Operation */
/*============================================================================*/
void Arduino_IP__Hardware_Interruption_Routine(
    const Arduino_Interruption_Pin* Me )
{    
    uint32_t timestamp;
    E_IO_Level pin_level = IO_LEVEL_LOW;
    
    timestamp = micros();
    Arduino_IP__Discrete_Pin__Get_Level( Me, &pin_level );

    /* Send the Pin_State_Changed event */
    (Me->Pin_State_Changed)( pin_level, timestamp );
}


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
/* Discrete_Pin:i_Discrete_Input */
void Arduino_IP__Discrete_Pin__Get_Level(
    const Arduino_Interruption_Pin* Me,
    E_IO_Level* level )
{
    /* Get hardware level of the pin of the Arduino board. */
    int arduino_pin_level = digitalRead( Me->Arduino_Pin_Id );
    
    if( LOW==arduino_pin_level )
    { /* Pin of the Arduino board is between 0 V and 0.8 V. */
        *level = IO_LEVEL_LOW;
    }
    else
    { /* Pin of the Arduino board is between 2.2 V and 5 V. */
        *level = IO_LEVEL_HIGH;
    }
}