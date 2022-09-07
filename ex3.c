#include <stdio.h>

int main(){
	char nomeVendedor[50];
	double salarioFixo;
	double totalVendas;
	
	printf("Digite o seu nome: \n");
	scanf("%s", &nomeVendedor);
	
	printf("Digite o seu salario fixo: \n");
	scanf("%lf", &salarioFixo);
	
	printf("Digite o total de vendas efetuadas no mes (em dinheiro): \n");
	scanf("%lf", &totalVendas);
	
	double totalComissao;
	double salarioFinal;
	totalComissao = totalVendas * 0.20;
	salarioFinal = salarioFixo + totalComissao;
	
	printf("Bem-vindo %s, o seu salario fixo e: %lf, e o seu salário desse mes e: %lf", nomeVendedor, salarioFixo, salarioFinal);
	
	
	
	return 0;
}

