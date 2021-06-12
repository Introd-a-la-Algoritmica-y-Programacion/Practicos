#include <stdio.h>
//Lexico, acordarme de definir la funcion en el lexico tambien//
int antiguedad, cuotaGeneral, cuotaFinal;
int valorFinalCuota(int cuotaGeneral, int antiguedad);
int main() {
	do {
		printf("Ingrese el valor de la cuota general: \n");
		scanf("%d",&cuotaGeneral);
	} while (cuotaGeneral < 0);
	do {
	printf("Ingrese los anios de antigüedad del socio: \n");
	scanf("%d",&antiguedad);
	} while (antiguedad < 0);
	cuotaFinal = valorFinalCuota(cuotaGeneral, antiguedad);
	printf("El valor de la cuota general es $%d, los anios de antiguedad del socio son %d y el valor final de la cuota es de $%d\n", cuotaGeneral, antiguedad, cuotaFinal);
	return 0;
}

//final de main
//implementacion de la funcion valorFinalCuota

int valorFinalCuota(int cuotaGeneral, int antiguedad){
	if(antiguedad > 5){
		return cuotaGeneral*0.92;
	} else{
		return cuotaGeneral;
	}
}