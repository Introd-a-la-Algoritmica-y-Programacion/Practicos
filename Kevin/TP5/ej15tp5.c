#include <stdio.h>
#include <string.h>
//Lexico//
struct TCarta {
	char palo[21];
	int valor;
} carta1, carta2, carta3;

int auxTipoDeTantos;
int tipoDeTantos(struct TCarta c1, struct TCarta c2, struct TCarta c3);

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
	auxTipoDeTantos = tipoDeTantos(carta1,carta2,carta3);
	printf("El valor devuelto por la funcion tipoDeTantos es %d\n",auxTipoDeTantos);
	return 0;
}

//fin del main
//implementacion de la funcion tipoDeTantos

int tipoDeTantos(struct TCarta c1, struct TCarta c2, struct TCarta c3){
	if(strcmp(carta1.palo,carta2.palo) == 0 && strcmp(carta1.palo,carta3.palo) == 0){
		return 1;
	} else
		if(strcmp(carta1.palo,carta2.palo) != 0 && strcmp(carta1.palo,carta3.palo) != 0 && strcmp(carta2.palo,carta3.palo) != 0){
			return 0;	
		}else{
			return 2;
		}
}