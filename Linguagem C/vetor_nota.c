#include <stdio.h>
#include <conio.h>

int main() {
	
	float notas[5]= {7, 8, 7.4, 10, 6.2};
	
	printf("Exibindo os valores do vetor: \n\n");
	printf("notas[0] = %.1f\n", notas[0]);
	printf("notas[1] = %.1f\n", notas[1]);
	printf("notas[2] = %.1f\n", notas[2]);
	printf("notas[3] = %.1f\n", notas[3]);
	printf("notas[4] = %.1f\n", notas[4]);
	
	getch();
	return 0;
}
