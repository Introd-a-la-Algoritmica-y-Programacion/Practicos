#include <stdio.h>
//Lexico//
float resultadoFacturas, sumaPerdidas;
int main() {
	sumaPerdidas = 0;
	while (resultadoFacturas != 999999) {
		printf("Ingrese un valor del listado de resultados de facturas: \n");
		scanf("%f",&resultadoFacturas);
		if (resultadoFacturas < 0){
			sumaPerdidas = sumaPerdidas + resultadoFacturas;
		}
	}
	printf("La suma total correspondiente a las perdidas del balance es: %.2f\n", sumaPerdidas);
	return 0;
}