#ifndef ARDUINO_DISCRETE_OUTPUT_PIN_H
#define ARDUINO_DISCRETE_OUTPUT_PIN_H


/* Attributes */
#include "stdint.h"
#include "Arduino.h"


/* Realized interfaces */
#include "i_Discrete_Output.h"


/* Needed interfaces */


/* Events */


class Arduino_Discrete_Output_Pin : i_Discrete_Output {
public :
    /*--------------------------------------------------------------------------------------------*/
    /* Constructor */
	Arduino_Discrete_Output_Pin( void ) {}
    Arduino_Discrete_Output_Pin( uint8_t an_arduino_pin_id );

    /*--------------------------------------------------------------------------------------------*/
    /* Component_Type_Operations */

    /*--------------------------------------------------------------------------------------------*/
    /* Event reception points accessors */

    /*--------------------------------------------------------------------------------------------*/
    /* Provided port accessors */
    i_Discrete_Output* Get_Port__Discrete_Pin( void );

    /*--------------------------------------------------------------------------------------------*/
    /* Provided operations */
    /* Discrete_Pin:i_Discrete_Output */
	void Set_Level( E_IO_LEVEL level ) override ;
	
private :
    /*--------------------------------------------------------------------------------------------*/
    /* Private attributes */
    uint8_t my_arduino_pin_id;

    /*--------------------------------------------------------------------------------------------*/
    /* Private methods */

    /*--------------------------------------------------------------------------------------------*/
    /* Requirer_Ports */

    /*--------------------------------------------------------------------------------------------*/
    /* Provider ports */

    /*--------------------------------------------------------------------------------------------*/
    /* Sent events */

    /*--------------------------------------------------------------------------------------------*/
    /* Received events */
};

#endif