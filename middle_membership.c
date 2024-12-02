#include <fis.h>

float mediumTemperatureMembership(float temperature) {
    if (temperature <= 15.0 || temperature >= 30.0)
        return 0.0;
    else if (temperature < 22.5)
        return (temperature - 15.0) / 7.5;
    else if (temperature == 22.5)
        return 1.0;
    else
        return (30.0 - temperature) / 7.5;
}