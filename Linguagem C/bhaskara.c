#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, x, x1, x2;

    printf("Enter the value of A: ");
    scanf("%f", &a);
    printf("Enter the value of B: ");
    scanf("%f", &b);
    printf("Enter the value of C: ");
    scanf("%f", &c);

    x = sqrt(pow(b,2) - (4 * a * c));


    if (a == 0 || x < 0) {
        printf("Esta equaçao nao possui raizes reais!\n");
    }
    else {
        x1 = (-b + x) / (2*a);
        x2 = (-b - x) / (2*a);
        printf("x1 = %.4f\n", x1);
        printf("x2 = %.4f\n", x2);
    }

return 0;
}