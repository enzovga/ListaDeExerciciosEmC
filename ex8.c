#include <stdio.h>
int main() {
	int idade;
	printf("Digite a sua idade: \n");
	scanf("%i",&idade);
	if (idade < 13) {
		printf("Você é um jogador infantil.");
	} else if (idade > 13 && idade < 17) {
		printf("Você é um jogador juvenil.");
	} else {
		printf("Você é um jogador senior.");
	}
	return 0;
}

