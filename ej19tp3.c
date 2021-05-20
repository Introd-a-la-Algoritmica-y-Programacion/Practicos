//Ejercicio 19 - FechaDiaSiguiente
#include <stdio.h>
//Lexico
int anio, mes, dia;
int ultimoDiaDelMes, anioBisiesto; //las uso como tipo logico
void main() {
	printf("Ingrese el dia: ");
	scanf("%d",&dia);
	printf("Ingrese el mes: ");
	scanf("%d",&mes);
	printf("Ingrese el anio: ");
	scanf("%d",&anio);

	if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
		anioBisiesto = 1;
	} else {
		anioBisiesto = 0;
	}
	
	if (dia == 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes== 8 || mes == 10 || mes == 12)) {
		ultimoDiaDelMes = 1;
	} else {
		if (dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
			ultimoDiaDelMes = 1;
		} else {
			if ((dia == 28 && mes == 2 && anioBisiesto == 0) || (dia == 29 && mes ==2 && anioBisiesto == 1)){
				ultimoDiaDelMes = 1;
			} else {
				ultimoDiaDelMes = 0;
			}
		}
	}

	if (ultimoDiaDelMes == 1){
		dia = 1;
		mes = mes + 1;
	} else {
		dia = dia + 1;
	}

	if (mes > 12){
		mes = 1;
		anio = anio + 1;
	}

	printf("La fecha correspondiente al proximo dia es %d/%d/%d\n", dia, mes, anio);
}