#include <stdio.h>

int main() {

    double length, width, area, price, priceLand;

    printf("Enter the length of the land (m): ");
    scanf("%lf", &length);
    printf("Enter the width of the land (m): ");
    scanf("%lf", &width);

    printf("Enter the price per m2: ");
    scanf("%lf", &price);

    area = length * width;
    priceLand = area * price;

    printf("The area is %.2lf m2\n", area);
    printf("The price of the land is %.2lf", priceLand);

    return 0;
}
