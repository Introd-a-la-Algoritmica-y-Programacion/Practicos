#include <stdio.h> <string.h>
// Lexico //
float tAnd1, tAnd2, tAnd3;
char orden[21];
void main(){
	printf("Ingrese el tiempo del andarivel 1: ");
	scanf("%f",&tAnd1);
	printf("Ingrese el tiempo del andarivel 2: ");
	scanf("%f",&tAnd2);
	printf("Ingrese el tiempo del andarivel 3: ");
	scanf("%f",&tAnd3);
	if (tAnd1 <= tAnd2 && tAnd2 <= tAnd3) {
		strcpy(orden, "ascendente");
	}
	else {
		if(tAnd1 >= tAnd2 && tAnd2 >= tAnd3) {
			strcpy(orden, "descendente");
		}
		else {
			strcpy(orden, "desordenados");
		}
	}
	printf("El orden en el que se encuentran los tiempos es %s \n", orden);
}
