#include <stdio.h>

int main(void) {
	
	int vetorX[10];
	int diferenca;
	int maior, menor;
	int posicaoMaior, posicaoMenor;
	
	printf("Digite os 10 numeros do vetor: \n");
	for(int i = 0; i < 10; i++) {
		printf("Digite o numero %d: ", i+1);
		scanf("%d", &vetorX[i]);
	}
	
	maior = vetorX[0];
	menor = vetorX[0];
	posicaoMaior = 0;
	posicaoMenor = 0;
	
	for(int i = 0; i < 10; i++) {
		if(vetorX[i] > maior) {
			maior = vetorX[i];
			posicaoMaior = i;
		}
		if(vetorX[i] < menor) {
			menor = vetorX[i];
			posicaoMenor = i;
		}
	}
	
	diferenca = maior - menor;
	
	printf("A diferença do maior para o menor é %d\n", diferenca);
	
	printf("O maior elemento esta na posicao %d", posicaoMaior + 1);
	printf("\nO menor elemento esta na posicao %d", posicaoMenor + 1);
	
	return 0;
}
