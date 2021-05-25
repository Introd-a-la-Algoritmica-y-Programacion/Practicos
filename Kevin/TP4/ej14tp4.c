#include <stdio.h>
//Lexico//
int n, i, multiplicacion;
int main() {
	do {
		printf("Ingrese un numero entre 1 y 10 para el que quiera conocer su tabla de multiplicar: ");
		scanf("%d",&n);
	} while (n <= 0 || n > 10);
	printf("La tabla de multiplicar del %d, es:\n", n);
	for (i = 1; i <= 10; i++) {
		multiplicacion = n * i;
		printf("%d x %d = %d\n", n, i, multiplicacion);
	}
	return 0;
}