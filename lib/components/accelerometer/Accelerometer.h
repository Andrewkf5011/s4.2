#include<mbed.h>

#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H

/**
 * @brief Describes an acceleromter component.
 *
 * Version: 1.0
 * Date: 04/04/2018
 * Originally Created: 04/04/2018
 */
class LED
{
    private:
        //[pinName] This is the name of the pin that the LED is wired to.
        PinName pinName;

    public:
        //[digitalOut] Refers to the digital output from the LED.
        DigitalOut digitalOut;

        /**
         * @brief Constructor for the LED class.
         * @param pinName This is the name of the pin that the LED is wired to.
         */
        LED(PinName pinName);

        /**
         * @return Returns the name of the pin that the LED is wired to.
         */
        PinName getPinName();

        /**
         * Turns the LED on.
         */
        void on();

        /**
         * Turns the LED off.
         */
        void off();
};

#endif // ACCELEROMETER_H
