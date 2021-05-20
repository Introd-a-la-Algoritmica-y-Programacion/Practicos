#include <stdio.h> 
#include <string.h> 
//Lexico//
int puntaje;
char RespuestaCorrecta1[21] = "Donatelo\n";   //les agrego el salto de pagina asi cuando ingreso las respuestas mediante el fgets, al enter me lo toma tambien
char RespuestaCorrecta2[21] = "La Piedad\n";
char RespuestaCorrecta3[21] = "Rafael\n";
void main(){
	char respuesta1[21], respuesta2[21], respuesta3[21];
	printf("Ingrese la respuesta 1: ");
	fgets(respuesta1,21,stdin);
	printf("Ingrese la respuesta 2: ");
	fgets(respuesta2,21,stdin);
	printf("Ingrese la respuesta 3: ");
	fgets(respuesta3,21,stdin);
	puntaje = 0;
	if ((strcmp(respuesta1, RespuestaCorrecta1))== 0){
			puntaje = puntaje + 100;
	}
	if((strcmp(respuesta2,RespuestaCorrecta2))==0){
		puntaje = puntaje + 100;
	}
	if((strcmp(respuesta3,RespuestaCorrecta3))==0){
		puntaje = puntaje + 100;
	}
	printf("El puntaje obtenido por el participante es de %d puntos \n", puntaje);
}