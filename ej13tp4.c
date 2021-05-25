#include <stdio.h>
//Lexico//
int i, a, y;
float calculoPotencia;
int main() {
	printf("Ingrese un numero entero para la base a:\n");
	scanf("%d",&a);
	printf("Ingrese un numero entero para el exponente y:\n");
	scanf("%d",&y);
	calculoPotencia = 1;
	//aca considero el caso que se utilice un exponente negativo, por eso agrego el || i <= y*-1//
	for (i = 1; i <= y || i <= y*-1; i++){
		calculoPotencia = calculoPotencia * a;
	}
	if (y < 0){
		calculoPotencia = 1/calculoPotencia;   
	}
	printf("El resultado de elevar %d a la %d es: %.6f\n",a,y,calculoPotencia);
	return 0;
}
