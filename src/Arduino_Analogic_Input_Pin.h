#ifndef ARDUINO_ANALOGIC_INPUT_PIN_H
#define ARDUINO_ANALOGIC_INPUT_PIN_H


/* Attributes */
#include "stdint.h"
#include "Arduino.h"


/* Realized interfaces */
#include "i_Analogic_Input.h"


/* Needed interfaces */


/* Events */


class Arduino_Analogic_Input_Pin {
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
    /* Analogic_Pin:i_Analogic_Input */
    class Analogic_Pin_Class : i_Analogic_Input {
    public :
        Analogic_Pin_Class( void ) {}
        Analogic_Pin_Class( Arduino_Analogic_Input_Pin* x ) : parent(x) {}
        void Get_Voltage( T_VOLTAGE* voltage ) override ;
    private :
        Arduino_Analogic_Input_Pin* parent;
    };
    Analogic_Pin_Class Analogic_Pin;
	
    /*--------------------------------------------------------------------------------------------*/
    /* Sent events */

    /*--------------------------------------------------------------------------------------------*/
    /* Received events */
};

#endif