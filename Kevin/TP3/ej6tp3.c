#include <stdio.h> 
//Lexico//
int dias;
int idaYVuelta; //aca usamos a idaYVuelta como una variable logica
float precio;
void main(){
	//obtener datos
	printf("Ingrese los dias que faltan para el vuelo: ");
	scanf("%d",&dias);
	printf("Ingrese 0 si solo quiere pasaje de ida y 1 si quiere ida y vuelta: ");
	scanf("%d",&idaYVuelta);
	if(dias >=1 && dias <15) {
		precio = 2875;
	}
	else {
		if(dias >= 15 & dias <30) {
			precio = 2350;
		}
		else {
			precio = 1650;
		}
	}
	if (idaYVuelta == 1) {
		precio = precio * 2;
	}
	printf("El precio a abonar es %.2f\n", precio);
	}
