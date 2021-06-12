#include <stdio.h>
#include <string.h>
//Lexico//
struct TCarta {
	char palo[21];
	int valor;
} carta1, carta2, carta3;

int auxTantosEnvido;
int tantosEnvido(struct TCarta c1, struct TCarta c2, struct TCarta c3);

int main(){
	do{
		printf("Ingrese el valor de la primer carta: \n");
		scanf("%d",&carta1.valor);
	} while (carta1.valor < 0 || carta1.valor > 12 || carta1.valor == 8 || carta1.valor == 9);
	do{
		printf("Ingrese el palo de la primer carta: \n");
		scanf("%s",&carta1.palo);
		while(getchar() != '\n');
	}  while ((strcmp(carta1.palo, "espada") != 0) && (strcmp(carta1.palo, "basto") != 0) && (strcmp(carta1.palo, "copa") != 0) && (strcmp(carta1.palo, "oro") != 0));
		do{
		printf("Ingrese el valor de la segunda carta: \n");
		scanf("%d",&carta2.valor);
	} while (carta2.valor < 0 || carta2.valor > 12 || carta2.valor == 8 || carta2.valor == 9);
	do{
		printf("Ingrese el palo de la segunda carta: \n");
		scanf("%s",&carta2.palo);
		while(getchar() != '\n');
	}  while ((strcmp(carta2.palo, "espada") != 0) && (strcmp(carta2.palo, "basto") != 0) && (strcmp(carta2.palo, "copa") != 0) && (strcmp(carta2.palo, "oro") != 0));
		do{
		printf("Ingrese el valor de la tercer carta: \n");
		scanf("%d",&carta3.valor);
	} while (carta3.valor < 0 || carta3.valor > 12 || carta3.valor == 8 || carta3.valor == 9);
	do{
		printf("Ingrese el palo de la tercer carta: \n");
		scanf("%s",&carta3.palo);
		while(getchar() != '\n');
	}  while ((strcmp(carta3.palo, "espada") != 0) && (strcmp(carta3.palo, "basto") != 0) && (strcmp(carta3.palo, "copa") != 0) && (strcmp(carta3.palo, "oro") != 0));
	auxTantosEnvido = tantosEnvido(carta1,carta2,carta3);
	printf("Con estas cartas los tantos para el envido son %d\n",auxTantosEnvido);
	return 0;
}

//fin del main
//implementacion de la funcion tantosEnvido

int tantosEnvido(struct TCarta c1, struct TCarta c2, struct TCarta c3){
int suma12, suma13, suma23;
//aca las inicializo con el valor de las cartas, si no hay dos cartas del mismo palo la funcion termina comparando el valor de las cartas/
	suma12 = carta1.valor;
	suma23 = carta2.valor;
	suma13 = carta3.valor;

	if(strcmp(carta1.palo,carta2.palo) == 0){
		suma12 = 20;
		if(carta1.valor < 10){
			suma12 = suma12 + carta1.valor;
		}
		if(carta2.valor < 10){
			suma12 = suma12 + carta2.valor;
		}
	}
	if(strcmp(carta1.palo,carta3.palo) == 0){
		suma13 = 20;
		if(carta1.valor < 10){
			suma13 = suma13 + carta1.valor;
		}
		if(carta3.valor < 10){
			suma13 = suma13 + carta3.valor;
		}
	}
	if(strcmp(carta2.palo,carta3.palo) == 0){
		suma23 = 20;
		if(carta2.valor < 10){
			suma23 = suma23 + carta2.valor;
		}
		if(carta3.valor < 10){
			suma23 = suma23 + carta3.valor;
		}
	}
	//aca seria mas elegante definir una funcion maximo y aplicarlo a suma12, suma13 y suma23//
	if(suma12 >= suma13 && suma12 >= suma23){
		return suma12;
	}else{
		if(suma13 >= suma12 && suma13 >= suma23){
			return suma13;
		}else{
			return suma23;
		}
	}
}