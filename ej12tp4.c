#include <stdio.h>
#include <string.h>
//Lexico//
int i, cantidadEstudiantes;
float nota, sumatoriaNotas, promedio;
char rendimientoAlumnos[21];
int main() {
	i = 0;
	sumatoriaNotas = 0;
	printf("Ingrese la cantidad de estudiantes que rindieron el examen: ");
	scanf("%d",&cantidadEstudiantes);
	do {
		do{
			printf("Ingrese el valor de una de las notas (de 0  a 10): ");
			scanf("%f",&nota);
			if (nota < 0 || nota > 10){
				printf("Valor de nota no valido\n");
			}
		} while (nota < 0 || nota > 10);
		sumatoriaNotas = sumatoriaNotas + nota;
		i = i + 1;
	} while (i < cantidadEstudiantes);
	promedio = sumatoriaNotas/cantidadEstudiantes;
	if(promedio > 8){
		strcpy(rendimientoAlumnos,"elevado");
	}else{
		if(promedio >= 6){
			strcpy(rendimientoAlumnos, "regular");
		}else{
			strcpy(rendimientoAlumnos,"bajo");
		}
	}
	printf("El rendimiento de los alumnos fue %s, el promedio del grupo fue de %.2f\n", rendimientoAlumnos, promedio);
	return 0;
}