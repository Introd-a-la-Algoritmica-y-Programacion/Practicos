#include <stdio.h>
//Lexico //
float horasTrabajadas, horasExtra, PagoPorHoraExtra, salario;
float PagoPorHora = 10;
float PagoPorHoraExtra = 15; 
void main() {
	printf("Ingrese el total de las horas trabajadas durante la semana: ");
	scanf("%f",&horasTrabajadas);
	if (horasTrabajadas <= 40) {
		salario = horasTrabajadas * PagoPorHora;
	}
	else {
		horasExtra = (horasTrabajadas - 40);
		salario = 40 * PagoPorHora + horasExtra * PagoPorHoraExtra;
	}
	printf("El salario a cobrar es: %.2f \n", salario);
}