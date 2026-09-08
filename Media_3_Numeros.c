#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	int a,b,c;
	float d;

	printf("Escreva o primeiro numero: ");
	scanf("%d",&a);


	printf("Escreva o segundo numero: "); scanf("%d",&b);


	printf("Escreva o terceiro numero: ");
	scanf("%d",&c);
		

	d = float((a+b+c))/3;
	
	printf ("a media aritmetica de %d, %d e %d eh %f", a,b,c,d);
	
	return 0;
}
