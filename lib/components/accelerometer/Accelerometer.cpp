#include <mbed.h>
#include <FXOS8700Q.h>
#include "Accelerometer.h"

Accelerometer::Accelerometer(I2C i2c) : acceleromter(i2c, FXOS8700CQ_SLAVE_ADDR1)
{

}

void Accelerometer::getAxis()
{
    acceleromter.getAxis(acceleromterData);
}

void Accelerometer::enable()
{
    acceleromter.enable();
}

void Accelerometer::disable()
{
    acceleromter.disable();
}
