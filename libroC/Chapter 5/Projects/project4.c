#include <stdio.h>

int main(void) {
    int wind_speed;

    printf("Enter the wind speed in knots: ");
    scanf("%d", &wind_speed);

    printf("The current description of the wind is: ");
    if (wind_speed < 1) {
        printf("Calm");
    } else if (wind_speed >= 1 && wind_speed <= 3) {
        printf("Light air");
    } else if (wind_speed >= 4 && wind_speed <= 27) {
        printf("Breeze");
    } else if (wind_speed >= 28 && wind_speed <= 47) {
        printf("Gale");
    } else if (wind_speed >= 48 && wind_speed <= 63) {
        printf("Storm");
    } else {
        printf("Hurricane");
    }

    return 0;
}