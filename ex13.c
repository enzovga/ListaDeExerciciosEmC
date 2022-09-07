#include <stdio.h>
int main() {
	double n1;
	printf("Digite um numero: \n");
	scanf("lf",&n1);
	if (n1>100 && n1<200) {
		printf("O numero está entre 100 e 200.");
	} else {
		printf("O numero nao esta entre 100 e 200.");
	}
}

