#include <stdio.h>

int main(void){

	int M, N;
	double somalinha;

	printf("Qual a quantidade de linhas da matriz? ");
	scanf("%d", &M);
	printf("Qual a quantidade de colunas da matriz? ");
	scanf("%d", &N);

	double matriz[M][N], vetor[M];

	for(int i=0; i < M; i++){
        printf("Digite os elementos da %d. linha:\n", i + 1);

		for(int j=0; j < N; j++){
            scanf(" %lf", &matriz[i][j]);
		}
	}

    for(int i = 0; i < M; i++){
        somalinha = 0;

        for(int j = 0; j < N; j++){
            somalinha = somalinha + matriz[i][j];
        }
        vetor[i] = somalinha;
    }


	printf("\nVETOR GERADO:\n");

	for(int i=0; i < M; i++){
		printf("\n%.2lf", vetor[i]);
	}

}
