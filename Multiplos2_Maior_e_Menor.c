#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b, ar, br;
	printf("a ,b ");
	scanf("%d %d", &a ,&b );
	
	if(a>0 && b>0){
		if (a%2 == 0 && b%2 == 0){
			printf("sao multiplos de 2\n");
		}else{ printf("nao sao multiplos de 2\n");}
		if(a>b) {
			if (a%b){
			printf("nao sao multiplos entre si\n");
			}else{
			printf("sao multiplos entre si\n");}
			}
		else {
			if (b%a){
			printf("nao sao multiplos entre si\n");
			}else{
			printf("sao multiplos entre si\n");}
		} 

	}else {
			if(a>b){
				printf("%d eh maior que %d\n", a,b);
			}else{
				printf("%d eh maior que %d\n",b ,a);}};
	
	return 0;
}
