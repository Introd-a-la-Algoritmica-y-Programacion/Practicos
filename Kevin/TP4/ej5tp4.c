#include <stdio.h>
//Lexico//
int mm, mmMax, mmMin, mes, mesMax, mesMin;
int main() {
	mes = 1;
	mmMax = 0;
	mmMin = 900000; //pongo un valor alto para que cualquier valor de lluvias entre como minimo. No puedo asignarle 0 aca!! 
	do {
		do {
			printf("Ingrese los mm de lluvia correspondientes al mes %d\n", mes);
			scanf("%d",&mm);
		} while (mm < 0);
		if (mm > mmMax){
			mmMax = mm;
			mesMax = mes;
		}
		if (mm < mmMin){
			mmMin = mm;
			mesMin = mes;
		}
		mes = mes + 1;
	} while (mes <= 12);
	printf("El mes con minimo de lluvias es el mes numero %d\n", mesMin);
	printf("El mes con maximo de lluvias es el mes numero %d\n", mesMax);
	return 0;
}