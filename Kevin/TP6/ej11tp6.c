#include <stdio.h>
//Lexico//
struct TPunto{
	float x,y;
} punto1, punto2, punto3;
int resultado; //variable logica que almacena el resultado de la accion estaEnElRectangulo
void cargarPunto(struct TPunto *p1);
void acomodarRectangulo(struct TPunto *p1,struct TPunto *p2);
void estaEnRectangulo(struct TPunto *p1,struct TPunto *p2,struct TPunto p3, int *res);
int main(){
	printf("Carga del punto 1 (uno de los vertices del rectangulo)\n");
	cargarPunto(&punto1);
	printf("Carga del punto 2 (vertice opuesto del rectangulo)\n");
	cargarPunto(&punto2);
	printf("Carga del punto 3(punto a analizar si esta dentro del rectangulo)\n");
	cargarPunto(&punto3);
	estaEnRectangulo(&punto1, &punto2, punto3, &resultado);
	if(resultado == 1){
		printf("El punto esta dentro del rectangulo\n");
	}else{
		printf("El punto NO esta dentro del rectangulo\n");
	}
	return 0;
}

//fin del main//
//implemento las acciones//

void cargarPunto(struct TPunto *p1){
	printf("Ingrese la coordenada x del punto: ");
	scanf("%f", &p1->x);
	printf("Ingrese la coordenada y del punto: ");
	scanf("%f", &p1->y);
}

void acomodarRectangulo(struct TPunto *p1,struct TPunto *p2){
	if(p1->x > p2->x){
		p2->x = p1->x + p2->x;
		p1->x = p2->x - p1->x;
		p2->x = p2->x - p1->x;
	}
	if(p1->y > p2->y){
		p2->y = p1->y + p2->y;
		p1->y = p2->y - p1->y;
		p2->y = p2->y - p1->y;
	}
}

void estaEnRectangulo(struct TPunto *p1,struct  TPunto *p2,struct TPunto p3, int *res){
	void acomodarRectangulo(struct TPunto *p1,struct  TPunto *p2);
	if((p1->x <= p3.x && p3.x <= p2->x) && (p1->y <= p3.y && p3.y <= p2->y)){
		*res = 1;
	}else{
		*res = 0;
	}
}