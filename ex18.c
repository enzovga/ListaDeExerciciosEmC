#include <stdio.h>
int main() {
	int n1,n2;
	printf("Digite dois numeros inteiros: \n");
	scanf("%i%i", &n1,&n2);
	if (n1 > n2) {
		printf("O primeiro numero %i e maior que o segundo numero %i, a diferenca entre eles e %i",n1,n2,(n1-n2));
	} else {
		printf("O segundo numero %i e maior que o primeiro numero %i, a diferença entre eles e %i",n2,n1,(n2-n1));
	}
}

