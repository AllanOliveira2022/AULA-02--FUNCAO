#include <stdio.h>


int imprimir_varios(int x){
	while(x){
		printf("Adoro programar \n");
		--x;
	}
	printf("o valor da quantidade � : %d\n", x);
	
}

int main(){
	int x;
	scanf("%d", &x);
	
	imprimir_varios(x);
	printf("O valor de x � : %d", x);
	
	
	return 0;
}
