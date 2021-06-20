#include <stdio.h>
#include <string.h>
//Lexico//
float numero1, numero2, resultado;
char operador;
void Calcular(float a, float b, char c, float *res);

int main(){

	printf("Ingrese un numero: ");
	scanf("%f",&numero1);
	while(getchar() != '\n'); //esto lo tengo que poner si o si porque sino el \n del enter queda en el buffer y como lo proximo que se lee es un char, se lee el \n//
	do{
	printf("Ingrese un operador (+, -, *, /): ");
	scanf("%c",&operador); //si uso caracter en lugar de cadena, debo agregar el &//
	}while(operador != '+' && operador != '-' && operador != '*' && operador != '/'); //cuando uso un caracter en lugar de cadenas tengo que poner '' en lugar de ""//
	printf("Ingrese un numero: ");
	scanf("%f",&numero2);
	Calcular(numero1, numero2, operador, &resultado);
	printf("El resultado de la operacion es %.3f\n",resultado);
	return 0;
}

//fin del main//
//implemento la accion Calcular//


void Calcular(float a, float b, char c, float *res){   
	if(operador == '+'){
		*res = a+b;
	}else{
		if(operador == '-'){
			*res = a-b;
		}else{
			if(operador == '*'){
				*res = a*b;
			}else{
				if(operador == '/' && b != 0){
					*res = a/b;
				}else{
					*res = 999999;
					printf("ERROR\n");
				}
			}
		}
	}
}
