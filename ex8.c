#include <stdio.h>
int main() {
	int idade;
	printf("Digite a sua idade: \n");
	scanf("%i",&idade);
	if (idade < 13) {
		printf("Voc� � um jogador infantil.");
	} else if (idade > 13 && idade < 17) {
		printf("Voc� � um jogador juvenil.");
	} else {
		printf("Voc� � um jogador senior.");
	}
	return 0;
}

