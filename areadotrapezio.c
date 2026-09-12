#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	int a,b,c;
	float d;

	printf("Escreva tamanho da base maior: ");
	scanf("%d",&a);

	
	printf("Escreva o tamanho da base menor: "); 
	scanf("%d",&b);
	

	printf("Escreva o tamanho da altura: ");
	scanf("%d",&c);

	d = float(((a+b)*c))/2;
	
	printf ("a a area do trapezio %f", d);
	
	return 0;
}
