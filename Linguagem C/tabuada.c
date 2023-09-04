#include <stdio.h>

int main() {

    int mult, calc;

    printf("Deseja a tabuada de qual valor? ");
    scanf("%d", &mult);

    for(int i = 0; i <= 10; i++) {
        calc = mult * i;

        printf("%d x %d = %d\n", mult, i, calc);
    }

}
