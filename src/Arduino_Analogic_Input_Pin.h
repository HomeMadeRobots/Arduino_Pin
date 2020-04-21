#ifndef ARDUINO_ANALOGIC_INPUT_PIN_H
#define ARDUINO_ANALOGIC_INPUT_PIN_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
/* Attributes */
#include <stdint.h>
#include "Arduino.h"


/* Realized interfaces */
#include "Analogic_Input.h"


/*============================================================================*/
/* Component_Type */
/*============================================================================*/
typedef struct {

    /* Configuration_Parameters */
    uint8_t Arduino_Pin_Id;

} Arduino_Analogic_Input_Pin;


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void Arduino_AIP__Analogic_Pin__Get_Voltage( 
    const Arduino_Analogic_Input_Pin* Me,
    T_Voltage* voltage );


#endif