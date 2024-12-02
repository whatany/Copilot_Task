#include <fis.h>

float highTemperatureMembership(float temperature) {
    if (temperature <= 25.0)
        return 0.0;
    else if (temperature < 35.0)
        return (temperature - 25.0) / 10.0;
    else
        return 1.0;
}