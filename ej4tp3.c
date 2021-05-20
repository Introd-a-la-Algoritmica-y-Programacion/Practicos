#include <stdio.h> //costoAlquilerAUto
/*Lexico*/
float km, costo;
float precioPorKm = 30;
float Adicional1 = 0.75;
float Adicional2 = 0.50;
void main(){
	printf("Ingrese los km recorridos: ");
	scanf("%f",&km);
	if(km <= 300) {
		costo = km * precioPorKm;
	} else {
		if(km <= 1000) {
		costo = km * precioPorKm + (km - 300) * Adicional1;
		}
		else {
		costo = km * precioPorKm + (km - 1000) * Adicional2;
		}
	}
printf("El costo por el alquiler del auto es %.2f \n", costo);
}