#include <stdio.h>

int dobro(int num1, int num2){
	int maior, dobro;
	if (num1 > num2){
		maior = num1;
		
	}else{
		maior = num2;
	}
	
	dobro = maior * 2;
	
	return dobro;
}
/* 
int dobro(int num){
	return 2 * num;
}
*/
int main(){
	int d, n1,n2;
	printf("Digite o primeiro numero : \n");
	scanf("%d", &n1);
	printf("Digite o segundo numero : \n");
	scanf("%d", &n2);
	
	d = dobro(n1,n2);
	printf(" O dobro do maior E : %d",d);

	return 0;
}
