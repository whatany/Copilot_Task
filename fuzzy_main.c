#include <stdio.h>
#include <stdlib.h>
#include <fis.h>

int main() {
    float temperature;
    printf("온도를 입력하세요: ");
    scanf("%f", &temperature);

    float output = fuzzyControl(temperature);

    printf("Temperature: %.2f°C\n", temperature);
    printf("Control Output: %.2f\n", output);

    return 0;
}