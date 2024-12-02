#include <fis.h>

float lowTemperatureMembership(float temperature) {
    if (temperature <= 0.0)
        return 1.0;
    else if (temperature < 20.0)
        return (20.0 - temperature) / 20.0;
    else
        return 0.0;
}