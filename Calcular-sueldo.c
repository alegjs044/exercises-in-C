#include<stdio.h>

void darSueldo(float *);
void calculaNSueldo(float, float *);
void mostrar(float );

void main( ){
   float sue, nsue;    
   darSueldo(&sue);
   calculaNSueldo(sue, &nsue);
   mostrar(nsue);
}

void darSueldo(float * s){
   printf("introduzca el sueldo\n");
   scanf("%f", s);
}
void calculaNSueldo(float s, float *ns){
        if(s <= 1000){
            *ns = s * 1.15;
        }
       else {
            *ns = s * 1.12;
       }
}
 
void mostrar(float ns){
   printf("%f", ns);
}
