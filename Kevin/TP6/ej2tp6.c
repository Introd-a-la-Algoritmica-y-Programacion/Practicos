#include <stdio.h>
#include <string.h>

float x, y, sup;
char z;
void Cargar(float *a, float *b, char *f);
void Calcular(float a, float b, char f, float *area);
void Mostrar(float a, float b, char f, float area);

int main(){
	Cargar(&x, &y, &z);
	Calcular(x, y, z, &sup);
	Mostrar(x, y, z, sup);
	return 0;
}

//fin del main
//implementacion de las acciones

void Cargar(float *a, float *b, char *f){
	do {
	printf("Ingrese una t si es un triangulo y una r si es un rectangulo\n");
	scanf("%c", &(*f));
	}while(*f != 't' && *f != 'r');
	if(*f == 'r'){
		printf("Ingrese el alto y ancho del rectangulo\n");
		scanf("%f %f", &(*a), &(*b));
	}else{
		printf("Ingrese la base y la altura del triangulo\n");
		scanf("%f %f", &(*a), &(*b));
	}
}

void Calcular(float a, float b, char f, float *area){
	if(f == 'r'){
		*area = a * b;
	}else{
		*area = a * b / 2;
	}
}

void Mostrar(float a, float b, char f, float area){
	char msge[60];
	if(f == 'r'){
		strcpy(msge, "El area del rectangulo dado por los lados");
	}else{
		strcpy(msge, "El area del triangulo dado por la altura y la base");
	}
	printf("%s de %.2f y %.2f es de %.2f\n", msge, b, a, area);
}