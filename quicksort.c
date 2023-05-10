#include<stdio.h>
#define Quicksort 10
void main(){
	void ordenaQuicksort (int*L,int lim_der,int lim_izq);
	int i,j,temp,arreglo;
	lim_izq=i;
	lim_der=j;
	arreglo=[(i + j) / 2];
	do{
		while(L[i]<arreglo && i<lim_der)
			i++;
		while(arreglo<L[j] && j>lim_izq)
			j--;
		if (i<=j)
		{
			temp=L[i];
			L[i]=L[j];
			L[j]=temp;
			i++;
			j--;
		}
	}
	while(i<=j);
		if (lim_izq<j)
		{
			Quicksort(L,lim_izq,j);
		}
		if(lim_der>i)
		{
			Quicksort(L,i,lim_der);
		}
		}
		

	
	

     