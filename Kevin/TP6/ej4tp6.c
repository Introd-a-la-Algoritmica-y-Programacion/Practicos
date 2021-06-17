#include <stdio.h>
#include <string.h>
//Lexico//
float numero1, numero2, resultado;
char operador[1];
void Calcular(float a, float b, char c[1], float *res);

int main(){

	printf("Ingrese un numero: ");
	scanf("%f",&numero1);
	do{
	printf("Ingrese un operador (+, -, *, /): ");
	scanf("%s",operador);
	while(getchar() != '\n');
	}while(((strcmp(operador, "+") != 0) && (strcmp(operador, "-") != 0) && (strcmp(operador, "*") != 0) && (strcmp(operador, "/") != 0)));
	printf("Ingrese un numero: ");
	scanf("%f",&numero2);
	Calcular(numero1, numero2, operador, &resultado);
	printf("El resultado de la operacion es %.3f\n",resultado);
	return 0;
}

//fin del main//
//implemento la accion Calcular//


void Calcular(float a, float b, char c[1], float *res){   
	if(strcmp(c,"+")==0){
		*res = a+b;
	}else{
		if(strcmp(c,"-")==0){
			*res = a-b;
		}else{
			if(strcmp(c,"*")==0){
				*res = a*b;
			}else{
				if((strcmp(c,"/")==0) && b != 0){
					*res = a/b;
				}else{
					*res = 999999;
					printf("ERROR\n");
				}
			}
		}
	}
}