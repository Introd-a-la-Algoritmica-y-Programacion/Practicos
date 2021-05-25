#include <stdio.h>
//Lexico//
int i;
int main() {
	i = 1;
	printf("Los numeros divisibles por 2, 4 y 6 comprendidos entre 1 y 100 son:\n");
	do {
		if (i % 4 == 0 && i % 6 == 0){
			printf("%d\n",i);
		}
		i = i + 1;	
	} while (i <= 100);
	return 0;
}