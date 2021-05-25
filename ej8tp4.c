#include <stdio.h>
//Lexico//
int n, i, multiplicacion;
int main() {
	do {
		printf("Ingrese un numero entre 1 y 10 para el que quiera conocer su tabla de multiplicar: ");
		scanf("%d",&n);
	} while (n <= 0 || n > 10);
	printf("La tabla de multiplicar del %d, es:\n", n);
	i = 1;
	do {
		multiplicacion = n * i;
		printf("%d x %d = %d\n", n, i, multiplicacion);
		i = i + 1;
	} while (i <= 10);
	return 0;
}