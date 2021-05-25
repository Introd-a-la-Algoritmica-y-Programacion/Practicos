#include <stdio.h> <string.h>
//Lexico //
float lado1, lado2, lado3;
char tipoTriangulo[21];
void main() {
	printf("Ingrese la longitud del lado 1: ");
	scanf("%f",&lado1);
	printf("Ingrese la longitud del lado 2: ");
	scanf("%f",&lado2);
	printf("Ingrese la longitud del lado 3: ");
	scanf("%f",&lado3);
	if (lado1 == lado2 && lado1 == lado3) {
	strcpy(tipoTriangulo,"equilatero");
	}
	else {
		if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
		strcpy(tipoTriangulo,"isosceles");
		}
		else {
		strcpy(tipoTriangulo,"escaleno");
		}
	}
	printf("El triangulo ingresado es %s \n", tipoTriangulo);
}
