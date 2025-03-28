//? Modify Project 2 so that the radius is input by the user.

#include <stdio.h>
#define PI 3.14159

int main(void) {
    float volume, radius;

    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Volume of sphere with radius %.2f: %.2f cubic meters \n", radius, volume = (4.0f/3.0f) * PI * radius*radius*radius);

    return 0;
}