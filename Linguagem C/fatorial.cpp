#include <stdio.h>

int main() {
	
	int fat, N;
	
	fat = 1;
	
	printf("Digite o valor de N: ");
	scanf("%d", &N);
	
	for(int i; i = N; i++) {
		
		fat = fat * i;
	}
	
	printf("FATORIAL: %d", fat);
	
	return 0;
}
