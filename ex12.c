#include <stdio.h>
int main() {
	double n1,n2,n3,media;
	char nome[50];
	printf("Digite o seu nome: \n");
	scanf("%s", &nome);
	printf("Digite as suas notas do semestre: \n");
	scanf("%lf%lf%lf",&n1,&n2,&n3);
	media = (n1 + n2 + n3) / 3;
	printf("%s, a sua media foi: %lf", nome, media);
	return 0;
}

