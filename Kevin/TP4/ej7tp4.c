#include <stdio.h>
//Lexico//
int n, i, sumatoria;
int main() {
	do {
		printf("Ingrese un numero (positivo) para el que quiera conocer su sumatoria\n");
		scanf("%d",&n);
	} while (n <= 0);
	i = 1;
	sumatoria = 0;
	do {
		sumatoria = sumatoria + i;
		i = i + 1;
	} while (i <= n);
	printf("La sumatoria correspondiente a los numeros naturales entre 1 y %d, es: %d\n", n, sumatoria);
	return 0;
}