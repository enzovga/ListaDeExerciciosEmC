#include <stdio.h>
int main() {
	int nFolhas;
	double valor;
	printf("Digite o numero de folhas:");
	scanf("%i",&nFolhas);
	if (nFolhas < 200) {
		valor = nFolhas * 0.50;
		printf("O valor total ficou: %lf", valor);
	} else { 
		valor = nFolhas * 0.30;
		printf("O valor total ficou: %lf", valor);
	}
	
	
	return 0;
}

