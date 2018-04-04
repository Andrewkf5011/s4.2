#include<mbed.h>
#include <FXOS8700Q.h>

#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H

/**
 * @brief Describes an acceleromter component.
 *
 * Version: 1.0
 * Date: 04/04/2018
 * Originally Created: 04/04/2018
 */
class Accelerometer
{
    //Yaw: Z
    //Roll: Z
    //Pitch: Y
    private:
        //[acceleromter] Refers to the acceleromter itself.
        FXOS8700QAccelerometer acceleromter;

        //[acceleromterData] Used to get data from the acceleromter.
        motion_data_units_t acceleromterData;

        /**
         * @brief Sets the current value of the acceleromter.
         */
        void getAxis();

    public:
        /**
         * @brief Constructor for the acceleromter class.
         * @param i2c This is the I2C used by the accelerometer.
         */
        Accelerometer(I2C i2c);

        /**
         * @brief Activates the acceleromter.
         */
        void enable();

        /**
         * @brief Deactivates the acceleromter.
         */
        void disable();
};

#endif // ACCELEROMETER_H
