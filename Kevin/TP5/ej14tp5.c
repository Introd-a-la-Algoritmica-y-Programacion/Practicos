#include <stdio.h>
#include <string.h>
//Lexico//
float notaParcial1, notaParcial2, notaParcial3, auxNotaFinal;
char condicion[21];
float promedio(float a, float b, float c);
float NotaFinal(float a, float b, float c);
int main() {
	do{
		printf("Ingrese el valor de la primer nota: \n");
		scanf("%f",&notaParcial1);
		if (notaParcial1 < 0 || notaParcial1 > 10){
			printf("La nota ingresada no es valida\n");
		}
	} while (notaParcial1 <0 || notaParcial1 > 10);
	do{
		printf("Ingrese el valor de la segunda nota: \n");
		scanf("%f",&notaParcial2);
		if (notaParcial2 < 0 || notaParcial2 > 10){
			printf("La nota ingresada no es valida\n");
		}
	} while (notaParcial2 <0 || notaParcial2 > 10);
	do{
		printf("Ingrese el valor de la tercer nota: \n");
		scanf("%f",&notaParcial3);
		if (notaParcial3 < 0 || notaParcial3 > 10){
			printf("La nota ingresada no es valida\n");
		}
	} while (notaParcial3 <0 || notaParcial3 > 10);
	auxNotaFinal = NotaFinal(notaParcial1, notaParcial2, notaParcial3);
	if (auxNotaFinal < 4){
		strcpy(condicion, "Libre");
	}else{
		if(auxNotaFinal < 7){
			strcpy(condicion, "Regular");
		}else{
			strcpy(condicion, "Promocion");
		}
	}
	printf("La condicion del alumno es %s\n", condicion);
	return 0;
}

//fin del main//
//hago las implementaciones de las funciones promedio y NotaFinal//

float promedio(float a, float b, float c){
	return (a + b + c)/3;
}

float NotaFinal(float a, float b, float c){
	if(a < 4 || b < 4 || c < 4){
		return 2;
	}else{
		return promedio(a,b,c);
	}
}