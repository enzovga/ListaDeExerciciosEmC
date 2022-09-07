#include <stdio.h>

int main() {
	double baseTriangulo;
	double alturaTriangulo;
	printf("Digite o valor da base do triângulo: \n");
	scanf("%lf", &baseTriangulo);
	printf("Digite o valor da altura do triângulo: \n");
	scanf("%lf", &alturaTriangulo);
	double areaTriangulo =  (baseTriangulo * alturaTriangulo) / 2.0;
	printf("O valor da area desse triângulo é: %lf", areaTriangulo);

	return 0;
}

