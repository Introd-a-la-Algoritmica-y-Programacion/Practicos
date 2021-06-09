//ej9tp5 - perteneceRecta//
#include <stdio.h>
//Lexico//
float a,b;
struct Tpunto {
	float x;
	float y;
}punto;
int estaEnLaRecta(float a,float b, struct punto); //la uso como una variable de tipo logico
int perteneceRecta; //variable auxiliar que almacena los valores de estaEnLaRecta
int main() {
	printf("Ingrese el valor del coeficiente a: \n");
	scanf("%f", &a);
	printf("Ingrese el valor del coeficiente b: \n");
	scanf("%f", &b);
	printf("Ingrese el valor de la coordenada x del punto: \n");
	scanf("%f", &punto.x);
	printf("Ingrese el valor del coeficiente y del punto: \n");
	scanf("%f", &punto.y);
	perteneceRecta = estaEnLaRecta(a,b,punto);
	if(perteneceRecta == 1){
		printf("El punto pertenece a la recta\n");
	}else{
		printf("El punto NO pertenece a la recta\n");
	}
	return 0;
}
//fin del main//
//implementacion de la funcion estaEnLaRecta//

int estaEnLaRecta(float a,float b,struct punto){
int aux;
	if(punto.y - a*punto.x - b == 0){
		aux = 1;
	}else{
		aux = 0;
	}
	return aux;
}