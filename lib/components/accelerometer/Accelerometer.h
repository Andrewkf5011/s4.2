#include<mbed.h>
#include <FXOS8700Q.h>

#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H

/**
 * @brief Describes an accelerometer component.
 *
 * Version: 1.1
 * Date: 04/04/2018
 * Originally Created: 04/04/2018
 */
class Accelerometer
{
    //Yaw: Z
    //Roll: Z
    //Pitch: Y
    private:
        //[accelerometer] Refers to the accelerometer itself.
        FXOS8700QAccelerometer accelerometer;

        //[accelerometerData] Used to get data from the accelerometer.
        motion_data_units_t accelerometerData;

    public:
        /**
         * @brief Constructor for the accelerometer class.
         * @param i2c This is the I2C used by the accelerometer.
         */
        Accelerometer(I2C *i2c);

        /**
         * @brief Activates the accelerometer.
         */
        void enable();

        /**
         * @brief Deactivates the accelerometer.
         */
        void disable();

        /**
         * @return Returns the 'X' of the accelerometer.
         */
        float getRoll();

        /**
         * @return Returns the 'Y' value of the accelerometer.
         */
        float getPitch();

};

#endif // ACCELEROMETER_H
