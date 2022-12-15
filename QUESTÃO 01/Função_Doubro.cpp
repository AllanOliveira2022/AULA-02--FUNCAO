#include <stdio.h>

int dobro(int num){
	int d = num * 2;
	return d;
}
/* 
int dobro(int num){
	return 2 * num;
}
*/
int main(){
	int n1, d;
	printf("Digite um numero : \n");
	scanf("%d", &n1);
	d = dobro(n1);
	printf(" O dobro de %d E : %d", n1,d);

	return 0;
}

// Para receber o retorno de uma função usamos uma variavel no MAIN para receber esse retorno :::: d = dobro(n1);
//Ou colocamos a fução dentro do PRINTF normalmente ::: printf("%d", dobro(n1);
