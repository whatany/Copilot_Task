#include <fis.h>

float fuzzyControl(float temperature) {
    float low = lowTemperatureMembership(temperature);
    float medium = mediumTemperatureMembership(temperature);
    float high = highTemperatureMembership(temperature);

    // 퍼지 규칙 적용 (예시)
    // 낮은 온도: 출력 1.0 (히터 최대 가동)
    // 중간 온도: 출력 0.5 (히터 절반 가동)
    // 높은 온도: 출력 0.0 (히터 끔)
    float controlOutput = (low * 1.0) + (medium * 0.5) + (high * 0.0);
    float totalMembership = low + medium + high;

    if (totalMembership != 0)
        controlOutput /= totalMembership;
    else
        controlOutput = 0.0;

    return controlOutput;
}