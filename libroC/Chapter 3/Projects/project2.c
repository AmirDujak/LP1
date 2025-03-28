#include <stdio.h>

int main(void) {
    int item_number, mm, dd, yyyy;
    float item_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter item price: ");
    scanf("%f", &item_price);
    printf("Enter date of purchase (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item \t Unit \t\t Purchase \n \t Price \t\t Date \n%d \t $ %.2f \t %.2d/%.2d/%.2d", item_number, item_price, mm, dd, yyyy);

    return 0;
}