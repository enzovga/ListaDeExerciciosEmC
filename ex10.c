#include <stdio.h>
int main() {
	double n1,n2,n3,media;
	printf("Digite tres numeros, para realizar uma media aritmetica: \n");
	scanf("%lf%lf%lf", &n1,&n2,&n3);
	media = (n1 + n2 + n3) / 3;
	printf("A media entre esses numeros foi: %lf", media);
}

