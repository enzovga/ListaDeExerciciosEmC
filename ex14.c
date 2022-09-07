#include <stdio.h>
int main() {
	double tempC,tempF;
	printf("Digite a temperatura em Celsius: \n");
	scanf("%lf", &tempC);
	tempF = (9 * tempC + 160) / 5;
	printf("A temperatura em Fahrenheit é: %lf", tempF);
}

