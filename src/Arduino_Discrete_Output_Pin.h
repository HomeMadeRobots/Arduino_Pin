#ifndef ARDUINO_DISCRETE_OUTPUT_PIN_H
#define ARDUINO_DISCRETE_OUTPUT_PIN_H


/*============================================================================*/
/* Inclusions */
/*============================================================================*/
/* Attributes */
#include <stdint.h>


/* Realized interfaces */
#include "Discrete_Output.h"


/*============================================================================*/
/* Component_Type */
/*============================================================================*/
typedef struct {

    /* Configuration_Parameters */
    uint8_t Arduino_Pin_Id;

} Arduino_Discrete_Output_Pin;


/*============================================================================*/
/* Component_Operations */
/*============================================================================*/
void Arduino_DOP__Initialize( const Arduino_Discrete_Output_Pin* Me );


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void Arduino_DOP__Discrete_Pin__Set_Level( 
    const Arduino_Discrete_Output_Pin* Me,
    E_IO_Level level );


#endif