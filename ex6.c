#include <stdio.h>
int main() {
	int n1;
	printf("Digite um numero: \n");
	scanf("%i", &n1);
	if (n1>200 && n1<300) {
		printf("O numero esta entre 200 e 300");
	} else {
		printf("O numero nao esta entre 200 e 300");
	}
	return 0;
}

