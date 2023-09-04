#include <stdio.h>

int main(void){
	
	int N, soma;
	int matriz[10][10];
	
	printf("Qual a ordem da matriz? ");
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			
			printf("Elemento [%d, %d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	soma = 0;
	
	for(int i = 0; i < N; i++) {
		for(int j = i + 1; j < N; j++) {
			
			soma = soma + matriz[i][j];
		}
	}
	printf("\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);
	
}
