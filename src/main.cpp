#include <mbed.h>
#include <FXOS8700Q.h>
#include "components.h"

I2C i2c(PTE25, PTE24);

AssignmentBoard board;

Accelerometer accelerometer(&i2c);

// FXOS8700QMagnetometer  mag(i2c, FXOS8700CQ_SLAVE_ADDR1);

Serial pc(USBTX, USBRX);

int main(void)
{

    // motion_data_units_t mag_data;

    accelerometer.enable();
    // mag.enable();

    while (true)
    {
        //mag.getAxis(mag_data);
        // pc.printf("ACC: X=%+1.3f Y=%+1.3f Z=%+1.3f \n",
        //           accelerometer.getRoll(),
        //           accelerometer.getPitch(),
        //           accelerometer.getYaw()
        // );
        //
        // pc.printf("MAG: X=%+4.1f Y=%+4.1f Z=%+4.1f\n",
        //           mag_data.x, mag_data.y, mag_data.z);

        // pc.printf("Roll: %+1.3f \n", accelerometer.getRoll());
        // pc.printf("Pitch: %+1.3f \n", accelerometer.getPitch());
        pc.printf("Yaw: %+1.3f \n", accelerometer.getYaw());
        wait(1);
    }
}
