#include <stdio.h>
//Lexico//
int n, i, sumatoria1, sumatoria2;
int main() {
	printf("Ingrese la cantidad de números de la serie Fibonacci que quiere conocer: ");
	scanf("%d",&n);
	sumatoria1 = 0;
	sumatoria2 = 1;
	i = 1;
	if (n==1){
		printf("0\n");  
	} else{
		do {
			printf("%d\n", sumatoria1);
			printf("%d\n", sumatoria2);
			sumatoria1 = sumatoria1 + sumatoria2;
			sumatoria2 = sumatoria2 + sumatoria1;
			i = i + 1;
		} while (2*i < n);  //si usaba n/2, no funca porque no guarda el 0,5
		if(n != 2){
			if(n % 2 == 0){
				printf("%d\n", sumatoria1);
				printf("%d\n", sumatoria2);
			}else{
				printf("%d\n", sumatoria1);
		}
	}
}
	return 0;
}