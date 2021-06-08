//ej9tp5 - perteneceRecta//
#include <stdio.h>
//Lexico//
float a,b,p,q;
int estaEnLaRecta(float a,float b,float x,float y); //la uso como una variable de tipo logico
int perteneceRecta; //variable auxiliar que almacena los valores de estaEnLaRecta
int main() {
	printf("Ingrese el valor del coeficiente a: \n");
	scanf("%f", &a);
	printf("Ingrese el valor del coeficiente b: \n");
	scanf("%f", &b);
	printf("Ingrese el valor de la coordenada x del punto: \n");
	scanf("%f", &p);
	printf("Ingrese el valor del coeficiente y del punto: \n");
	scanf("%f", &q);
	perteneceRecta = estaEnLaRecta(a,b,p,q);
	if(perteneceRecta == 1){
		printf("El punto pertenece a la recta\n");
	}else{
		printf("El punto NO pertenece a la recta\n");
	}
	return 0;
}
//fin del main//
//implementacion de la funcion estaEnLaRecta//

int estaEnLaRecta(float a,float b,float x,float y){
int aux;
	if(y - a*x - b == 0){
		aux = 1;
	}else{
		aux = 0;
	}
	return aux;
}
