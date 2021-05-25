#include <stdio.h>
//Lexico//
int i;
int main() {
	printf("Los numeros divisibles por 2, 4 y 6 comprendidos entre 1 y 100 son:\n");
	for(i = 1; i <= 100; i++){
		if (i % 4 == 0 && i % 6 == 0){
			printf("%d\n",i);
		}
	}
	return 0;
}