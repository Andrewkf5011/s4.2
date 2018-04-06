#include <mbed.h>
#include <FXOS8700Q.h>
#include "components.h"

I2C i2c(PTE25, PTE24);

AssignmentBoard board;

Accelerometer accelerometer(&i2c);
Magnetometer magnetometer(&i2c);

Serial pc(USBTX, USBRX);

int main(void)
{
    accelerometer.enable();
    magnetometer.enable();

    while (true)
    {
        accelerometer.update();
        magnetometer.update();
        
        pc.printf("ACC: X=%+1.3f Y=%+1.3f Z=%+1.3f \n",
            accelerometer.getX(),
            accelerometer.getY(),
            accelerometer.getZ()
        );

        pc.printf("MAG: X=%+4.1f Y=%+4.1f Z=%+4.1f\n",
            magnetometer.getX(),
            magnetometer.getY(),
            magnetometer.getZ()
        );

        wait(1);
    }
}
