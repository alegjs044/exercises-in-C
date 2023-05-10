#include <stdio.h>
 int main()
{
	int edad;
	printf("ingresa tu edad\n");
	scanf("%d",&edad);
	if(edad >=18) 
	{
		printf("eres mayor de edad\n"); /*se cumple*/

	}
	else if(edad==17){ //volver a preguntar//
		printf("casi \n");
	}
	else{ //sino se cumple, entonces//
		printf("eres menor de edad\n");
	}
	return 0;
}