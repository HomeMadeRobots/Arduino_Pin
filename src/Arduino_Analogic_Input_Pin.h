#ifndef ARDUINO_ANALOGIC_INPUT_PIN_H
#define ARDUINO_ANALOGIC_INPUT_PIN_H


/* Attributes */
#include "stdint.h"
#include "Arduino.h"


/* Realized interfaces */
#include "i_Analogic_Input.h"


/* Needed interfaces */


/* Events */


class Arduino_Analogic_Input_Pin : i_Analogic_Input {
public :
    /*--------------------------------------------------------------------------------------------*/
    /* Constructor */
	Arduino_Analogic_Input_Pin( void ) {}
    Arduino_Analogic_Input_Pin( uint8_t an_arduino_pin_id );
	
    /*--------------------------------------------------------------------------------------------*/
    /* Component_Type_Operations */

    /*--------------------------------------------------------------------------------------------*/
    /* Event reception points accessors */

    /*--------------------------------------------------------------------------------------------*/
    /* Provided port accessors */
    i_Analogic_Input* Get_Port__Analogic_Pin( void );

	/*--------------------------------------------------------------------------------------------*/
    /* Provided operations */
    /* Analogic_Pin:i_Analogic_Input */
	void Get_Voltage( T_VOLTAGE* voltage ) override ;
	
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