#include <stdio.h>
int main() {
	int n1,n2;
	printf("Digite dois numeros: \n");
	scanf("%i%i",&n1,&n2);
	if (n1 > n2) {
		printf("O segundo numero e o menor.");
	} else {
		printf("O primeiro numero e o menor.");
	}
}

