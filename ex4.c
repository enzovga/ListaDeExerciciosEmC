#include <stdio.h>
int main() {
	
	char nomeAluno[50];
	double n1,n2,n3,notaFinal;
	printf("Digite o seu nome: \n");
	scanf("%s",&nomeAluno);
	printf("Digite as suas notas nas provas 1,2 e 3: \n");
	scanf("%lf%lf%lf", &n1,&n2,&n3);
	notaFinal =  ((n1 * 2) + (n2 * 4) + (n3 * 6)) / 12;
	printf("Bem-vindo: %s, sua nota final e: %lf", nomeAluno, notaFinal);
	
	return 0;
}

