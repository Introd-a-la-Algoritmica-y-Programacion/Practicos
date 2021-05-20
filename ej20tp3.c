#include <stdio.h>
//Lexico
int hora, min, seg;
void main(){
	printf("Ingrese la hora: ");
	scanf("%d",&hora);
	printf("Ingrese los minutos: ");
	scanf("%d",&min);
	printf("Ingrese los segundos: ");
	scanf("%d",&seg);
	seg = seg + 1;
	if(seg == 60){
		seg = 0;
		min = min + 1;
	}

	if(min == 60){
		min = 0;
		hora = hora + 1;
	}

	if(hora == 24){
		hora = 0;
	}
	printf("La hora que marcara el reloj un segundo despues es %dh %dmin %dseg \n", hora, min, seg);
}