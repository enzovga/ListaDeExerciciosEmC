#include <stdio.h>
int main() {
	int n1,n2;
	printf("Digite dois numeros: \n");
	scanf("%i%i", &n1,&n2);
	
	if (n1 == n2) {
		printf("Os numeros sao iguais.");
	} else if (n1 > n2) {
		printf("O primeiro numero %i, e maior que o segundo %i", n1,n2);	
	} else {
		printf("O segundo numero %i, e maior que o primeiro %i",n2,n1);
	}
	return 0;
}

