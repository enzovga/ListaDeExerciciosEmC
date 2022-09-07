#include <stdio.h>
	
	int main() {
	double primeiroNum;
	double segundoNum;
	printf("Digite o primeiro numero: \n");
	scanf("%lf", &primeiroNum);
	printf("Digite o segundo numero: \n");
	scanf("%lf", &segundoNum);
	double soma = primeiroNum + segundoNum;
	double subtracao = primeiroNum - segundoNum;
	double multiplicacao = primeiroNum * segundoNum;
	double divisao = primeiroNum / segundoNum;
	printf("O resultado da soma e: %lf \n da subtracao e: %lf \n da multiplicacao e: %lf \n da divisao e: %lf \n", soma, subtracao, multiplicacao, divisao);
	return 0;
}

