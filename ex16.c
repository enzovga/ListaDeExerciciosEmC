#include <stdio.h>
int main() {
	int a,b,c;
	int maior,meio,menor;
	printf("Digite o valor de tres numeros inteiros");
	scanf("%i%i%i", &a,&b,&c);
	if (a>b && a>c){
		maior = a;
	} if (b>c){
		meio = b;
		menor = c;
	} else {
		meio = c;
		menor = b;
	}
	
	if (c>b && c>a){
		maior = c;
	} if (b>a){
		meio = b;
		menor = a;
	} else {
		meio = a;
		menor = b;
	}
	
	if (b>a && b>c){
		maior = b;
	} if (a>c){
		meio = a;
		menor = c;
	} else {
		meio = c;
		menor = a;
	}
	
	
	printf("Menor: %i Meio: %i Maior:%i", menor,meio,maior);
	
}

