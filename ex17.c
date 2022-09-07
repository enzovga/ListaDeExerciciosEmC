#include <stdio.h>
int main() {
	double n1,n2,n3,n4,media;
	printf("Digite as suas notas: \n");
	scanf("%lf%lf%lf%lf", &n1,&n2,&n3,&n4);
	if (((n1+n2+n3+n4)/4) > 5) {
		printf("O aluno esta aprovado");
	} else {
		printf("O aluno esta reprovado");
	}
}

