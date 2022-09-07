#include <stdio.h>
int main() {
	double tempC,tempF;
	printf("Digite a temperatura em Fahrenheit: \n");
	scanf("%lf", &tempF);
	tempC = ((tempF - 32) * 5) / 9;
	printf("A temperatura em Celsius é: %lf", tempC);
}

