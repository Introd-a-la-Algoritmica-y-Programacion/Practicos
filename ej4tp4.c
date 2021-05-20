#include <stdio.h>
//Lexico//
int n, i, a, b, c;
int main() {
	printf("Ingrese la cantidad de números de la serie Fibonacci que quiere conocer: ");
	scanf("%d",&n);
	a = 0;
	b = 1;
	i = 1;
	do {
		printf("%d\n", a);
		c = a + b;
		a = b;
		b = c;
		i = i + 1;
	} while (i <= n);  
	return 0;
}
