#include <stdio.h>
//Lexico//
int numeroMes, dias;
void main() {
	printf("Ingrese el numero correspondiente al mes: ");
	scanf("%d",&numeroMes);
	if (numeroMes == 1 || numeroMes == 3 || numeroMes == 5 || numeroMes == 7 || numeroMes== 8 || numeroMes == 10 || numeroMes == 12) {
		dias = 31;
	} else {
		if (numeroMes == 4 || numeroMes == 6 || numeroMes == 9 || numeroMes == 11) {
			dias = 30;
		}else {
			dias = 28;
		}

	}
		
printf("Este mes tiene %d dias\n", dias);
}
