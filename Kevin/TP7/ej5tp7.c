#include <stdio.h>
#define Max 200
typedef struct {
				int a[Max];
				int cant;
				}TData;
TData misNotas;
float promedio;
void cargarNotas(TData *notas);
void promedioNotas(TData notas, float *prom);

int main(){
	cargarNotas(&misNotas);
	promedioNotas(misNotas, &promedio);
	printf("El promedio de las notas cargadas es: %.2f\n", promedio);
	return 0;
}

//fin del main. Implementacion de las acciones declaradas en el lexico

void cargarNotas(TData *notas){
	int i; //variable de control del para
	printf("Ingrese la cantidad de notas que seran cargadas: ");
	do{
		scanf("%d", &notas->cant);
		if ((*notas).cant < 0 || (*notas).cant > Max){
			printf("Ingrese una cantidad de notas valida (0 a 200): ");
		}
	}while((*notas).cant < 0 || (*notas).cant > Max);
	if((*notas).cant > 0){
		printf("Ingrese las %d notas: ", notas->cant);
		for(i=0; i < (*notas).cant; i++){
			do{
				scanf("%d", &notas->a[i]);
			} while((*notas).a[i] < 0 || (*notas).a[i] > 10);
		}
	}
}

void promedioNotas(TData notas, float *prom){
	int i; //variale de control del para
	float suma; //variable donde voy guardando la suma de las notas. La declaro como float para que el promedio sea float tambien
	if(notas.cant > 0){
		suma = 0;
		for(i=0; i < notas.cant; i++){
			suma = suma + notas.a[i];
		}
		*prom = suma / notas.cant;
	}else{
		printf("ERROR. No se han ingresado notas como para calcular el promedio\n");
		*prom = 999999; //codigo de error
	}
}