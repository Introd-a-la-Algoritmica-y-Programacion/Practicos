#include <stdio.h>
#include <string.h>
#include <math.h> //biblioteca que tiene operaciones matematicas como potenica y raiz
//Para que me tome las funciones sqrt y pow cuando compilo tuve que agregar esto al final de la compilacion -lm -Wall
//Lexico//
float xVertice1, yVertice1, xVertice2, yVertice2, xCentroCirculo, yCentroCirculo, radioCirculo, xProblema, yProblema, distanciaAlCirculo, xTransformado1, xTransformado2, yTransformado1, yTransformado2;
int adentroCirculo, adentroRectangulo; //las uso como variables de tipo logico (1 verdadero y 0 falso)
char res[50];
int main() {
	printf("Ingrese la coordenada en x del primer vertice: ");
	scanf("%f",&xVertice1);
	printf("Ingrese la coordenada en y del primer vertice: ");
	scanf("%f",&yVertice1);
	printf("Ingrese la coordenada en x del segundo vertice: ");
	scanf("%f",&xVertice2);
	printf("Ingrese la coordenada en y del segundo vertice: ");
	scanf("%f",&yVertice2);
	printf("Ingrese la coordenada en x del centro del circulo: ");
	scanf("%f",&xCentroCirculo);
	printf("Ingrese la coordenada en y del centro del circulo: ");
	scanf("%f",&yCentroCirculo);
	printf("Ingrese el radio del circulo: ");
	scanf("%f",&radioCirculo);
	printf("Ingrese la coordenada en x del punto problema: ");
	scanf("%f",&xProblema);
	printf("Ingrese la coordenada en y del punto problema: ");
	scanf("%f",&yProblema);
	distanciaAlCirculo = sqrt(pow(xProblema - xCentroCirculo, 2) + pow(yProblema - yCentroCirculo, 2));
	//chequeo que el punto problema este adentro del circulo
	if(distanciaAlCirculo <= radioCirculo){
		adentroCirculo = 1;
	} else{
		adentroCirculo = 0;
	}
	//ahora hago la "transformacion" en x
	if(xVertice1 <= xVertice2){
		xTransformado1 = xVertice1;
		xTransformado2 = xVertice2;
	} else {
		xTransformado1 = xVertice2;
		xTransformado2 = xVertice1;
	}
	//ahora hago lo mismo en y
	if(yVertice1 <= yVertice2){
		yTransformado1 = yVertice1;
		yTransformado2 = yVertice2;
	} else {
		yTransformado1 = yVertice2;
		yTransformado2 = yVertice1;
	}
	//chequeo si el punto problema esta adentro del ractangulo
	if((xTransformado1 <= xProblema && xProblema <= xTransformado2) && (yTransformado1 <= yProblema && yProblema <= yTransformado2)){
		adentroRectangulo = 1;
	} else {
		adentroRectangulo = 0;
	}
	//ahora combino los resultados de adentroCirculo y adentroRectangulo
	if(adentroCirculo == 1 && adentroRectangulo == 1){
		strcpy(res, "El punto es interior al circulo y al rectangulo");
	} else {
		if(adentroCirculo == 1 && adentroRectangulo == 0){
			strcpy(res, "El punto es interior al circulo");
		} else {
			if(adentroCirculo == 0 && adentroRectangulo == 1){
				strcpy(res, "El punto es interior al rectangulo");
			} else {
				strcpy(res, "El punto es exterior al circulo y al rectangulo");
			}
		}
	}
	printf("%s \n", res);
	return 0;
} 