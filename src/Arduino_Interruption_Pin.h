#ifndef ARDUINO_INTERRUPTION_PIN_H
#define ARDUINO_INTERRUPTION_PIN_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
/* Attributes */
#include <stdint.h>


/* Realized interfaces */
#include "Discrete_Input.h"


/* Sent events */
#include "Hardware_Interruption_Arised.h"


/*============================================================================*/
/* Component_Type */
/*============================================================================*/
typedef struct {
    
    /* Configuration_Attributes */
    uint8_t Arduino_Pin_Id;

    /* Sent event */
    Hardware_Interruption_Arised Pin_State_Changed;
    
} Arduino_Interruption_Pin;


/*============================================================================*/
/* Component_Operations */
/*============================================================================*/
void Arduino_IP__Hardware_Interruption_Routine( 
    const Arduino_Interruption_Pin* Me );


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void Arduino_IP__Discrete_Pin__Get_Level(
    const Arduino_Interruption_Pin* Me,
    E_IO_Level* level );


#endif