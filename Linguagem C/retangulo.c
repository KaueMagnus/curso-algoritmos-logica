#include <stdio.h>
#include <math.h>

int main() {

    float base, height, area, perimeter, diag;

    printf("Enter the rectangle base: ");
    scanf("%f", &base);
    printf("Enther the rectangle height: ");
    scanf("%f", &height);

    area = base * height;
    perimeter = 2 * (base + height);
    diag = sqrt((pow(base, 2) + pow(height, 2)));

    printf("Area = %.4f\n", area);
    printf("Perimeter = %.4f\n", perimeter);
    printf("Diagonal = %.4f\n", diag);

    return 0;
}

