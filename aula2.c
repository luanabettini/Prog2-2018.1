#include <stdio.h>

int soma(int v1, int v2);
int main(){
	int n1;
	int n2;
	
	printf("\nEntre com o primeiro numero:");
	scanf("%d", &n1);
	printf("\nEntre com o segundo numero:");
	scanf("%d", &n2);	
	printf("\nSoma = %d", soma(n1,n2));
}

int soma(int v1, int v2){
	int soma=0;
	int cont;
	
	for(cont=v1;cont<=v2;cont++){
		soma+=cont;
	}
	return soma;
}
