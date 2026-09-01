#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	printf("Insira uma letra: ");
	scanf("%c",&letra);
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		if( letra == 'a' || letra == 'o'){
			printf("aoba");
		}
		if( letra == 'i' || letra == 'u'){
			printf("la ele");
		}
	}else {
		printf("67");
	}
	printf("\n");
	
	switch (letra){
		case 'a':
			printf("a de AMOR");
			break;
	    case 'b':
	    	printf("b de BAIXINHO");
	    	break;
	    case 'c':
	    	printf("c de CORAÇAO");
	    	break;
	    case 'd':
	    	printf("d de DACINHO");
	    	break;
	}
	
	return 0;
}
