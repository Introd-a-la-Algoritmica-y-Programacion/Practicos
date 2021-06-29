#include <stdio.h>
int a,b;
void Swap (int *x,int *y) {
 *x = (*x)+(*y);
 *y = (*x)-(*y);    //el problema cuando utilizamos como parametro a la misma variable, es que los valores de x e y
 *x = (*x)-(*y);	//van a ser iguales en todo momento porque usan la misma direccion de memoria. Por eso cuando
}					//hacemos la resta, terminamos obteniendo 0 en la lineas 20-21.
int main() {
 printf("introduce el valor de la variable a ");
 scanf("%i",&a);
 printf("introduce el valor de la variable b ");
 scanf("%i",&b);
 Swap (&a, &b);
 printf ("el valor de a es %d ", a);
 printf ("el valor de b es %d ", b);
 printf("\n introduce el valor de la variable a ");
 scanf("%i",&a);
 printf("introduce el valor de la variable b ");
 scanf("%i",&b);
 Swap (&a, &a);
 printf ("el valor de a es %d \n", a);
 return 0;
} 