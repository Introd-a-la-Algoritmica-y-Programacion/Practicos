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
	if(hora == 23 && min == 59 && seg == 59){
		hora = 0;
		min = 0;
		seg = 0;
	} else {
		if(min == 59 && seg == 59){
			hora = hora + 1;
			min = 0;
			seg = 0;
		} else {
			if(seg == 59){
				min = min + 1;
				seg = 0;
			} else {
				seg = seg + 1;
			}
		}
	}
	printf("La hora que marcara el reloj un segundo despues es %dh %dmin %dseg \n", hora, min, seg);
}