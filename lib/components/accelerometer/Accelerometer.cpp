#include <mbed.h>
#include <FXOS8700Q.h>
#include "Accelerometer.h"

Accelerometer::Accelerometer(I2C *i2c) : accelerometer(*i2c, FXOS8700CQ_SLAVE_ADDR1)
{

}

void Accelerometer::enable()
{
    accelerometer.enable();
}

void Accelerometer::disable()
{
    accelerometer.disable();
}

float Accelerometer::getRoll()
{
    accelerometer.getAxis(accelerometerData);

    return accelerometerData.x;
}

float Accelerometer::getPitch()
{
    accelerometer.getAxis(accelerometerData);

    return accelerometerData.y;
}

float Accelerometer::getYaw()
{
    accelerometer.getAxis(accelerometerData);

    return accelerometerData.z;
}
