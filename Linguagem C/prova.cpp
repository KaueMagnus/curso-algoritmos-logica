#include <stdio.h>

int main(void) {
	
	int n[5], a, b, c, contA=0, contB=0, contC=0;
	
	for(int i=0; i < 5; i++) {
		printf("Digite 5 numeros: \n");
		scanf("%d", &n[i]);
	}
	
	printf("Informe A: \n");
	scanf("%d", &a);
	printf("Informe B: \n");
	scanf("%d", &b);
	printf("Informe B: \n");
	scanf("%d", &c);
	
	for(int i = 0; i < 5; i++) {
		
		if(n[i] == a) {
			contA++;
		}
		else if(n[i] == b) {
			contB++;
		}
		else if(n[i] == c) {
			contC++;
		}
	}
	
	printf("A apareceu %d vezes\nB apareceu %d vezes\nC apareceu %d vezes", contA, contB, contC);
	
	return 0;
}
