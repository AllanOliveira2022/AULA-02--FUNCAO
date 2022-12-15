#include <stdio.h>

int Maior(int num1, int num2){
	int maior;
	if (num1 > num2){
		maior = num1;
		
	}else{
		maior = num2;
	}
	
	return maior;
}

int main(){
	int m, n1,n2;
	printf("Digite o primeiro numero : \n");
	scanf("%d", &n1);
	printf("Digite o segundo numero : \n");
	scanf("%d", &n2);
	
	m = Maior(n1,n2);
	printf(" O maior numero  E : %d",m);

	return 0;
}
