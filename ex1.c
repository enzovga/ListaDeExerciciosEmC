#include <stdio.h>

int main() {
	double baseTriangulo;
	double alturaTriangulo;
	printf("Digite o valor da base do tri�ngulo: \n");
	scanf("%lf", &baseTriangulo);
	printf("Digite o valor da altura do tri�ngulo: \n");
	scanf("%lf", &alturaTriangulo);
	double areaTriangulo =  (baseTriangulo * alturaTriangulo) / 2.0;
	printf("O valor da area desse tri�ngulo �: %lf", areaTriangulo);

	return 0;
}

