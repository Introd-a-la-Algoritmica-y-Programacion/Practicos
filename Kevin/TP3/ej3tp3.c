#include <stdio.h> //numeroMayorDeDosDigitos
/*Lexico*/
int a, b, combinacion1, combinacion2, res;
void main(){
printf("Ingrese un digito: ");
scanf("%d",&a);
printf("Ingrese el otro digito: ");
scanf("%d",&b);
combinacion1 = a * 10 + b ;
combinacion2 = a + b * 10 ;
if (combinacion1 >= combinacion2 ) {
res = combinacion1 ; 
}
else {
res = combinacion2 ;
}
printf("El mayor numero de dos digitos que puede formarse es %d \n", res);
}
