#include <stdio.h> /* #include <stdio.h> indicates that the Standard Input Output library will be used. */

/* int main(void) {  //?int indicates that it will return an integer value. void indicates that there is no parameter for the function. 
    printf("To C, or not to C: ");
    printf("that is the question. \n");  //? \n indicates a new line.
    return 0;
}  */

/* int main (void) {
    int Height;
    Height = 8;
    printf("Height: %d \n", Height);  //? %d indicates an integer. %f indicates a floating point number. %.2f indicates a floating point number with 2 decimal places.
    return 0;
} */

/* int main (void) {
    int height = 8, length = 10, width = 12;
    int volume, weight;

    printf("Dimensions: %d x %d x %d \n", height, length, width);
    printf("Volume (cubic inches): %d \n", volume = height * length * width);
    printf("Dimensional weight (pounds): %d \n", weight = (volume + 165) / 166);

    return 0;
} */

//? Ahora vamos a agregarle input mediante scanf.
int main (void) {
    int height, length, width, volume, weight;

    printf("Enter height of the box: ");
    scanf("%d", &height);
    printf("Enter length of the box: ");
    scanf("%d", &length);
    printf("Enter width of the box: ");
    scanf("%d", &width);

    volume = height * length * width;

    printf("Volume (cubic inches): %d \n", volume);
    printf("Dimensional weight of the box: %d \n", (volume + 165) / 166);

    return 0;
}