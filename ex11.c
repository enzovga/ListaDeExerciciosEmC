#include <stdio.h>
int main() {
	int n1;
	printf("Digite um numero inteiro: \n");
	scanf("%i", &n1);
	if (n1%2 == 0) {
		printf("Esse é um numero par.");
	} else {
		printf("Esse é um numero impar.");
	}
}

