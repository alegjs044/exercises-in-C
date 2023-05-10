#include <stdio.h>

int xvalor(int);
void xreferencia(int*);

int main(void){
	int original=5;
	original=xvalor(original);
	printf("%d\n",original);
	xreferencia(&original);
	printf("%d\n",original);
	return 0;
}

int xvalor(int valor){
	scanf("%d",&valor);
	return valor;
}

void xreferencia(int* puntero){
	scanf("%d",puntero);
}