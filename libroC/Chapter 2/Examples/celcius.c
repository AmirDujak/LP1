#include <stdio.h>

#define FREEZING_PT 32.0 //?#define is a preprocessing directive, so there's no semicolon at the end. When a program is compiled, the preprocessor replaces each macro by the value it represents.
#define SCALE_FACTOR (5.0f / 9.0f) //? the "f" at the end of a number indicates that it is a floating point number. If we leave it like (5/9) it would treat it as an integer, truncating the value to 0, but if we add "f" at the end it would treat it as a floating point number, therefore not truncating the value.

int main(void) {
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f \n", celsius);

    return 0;
}
