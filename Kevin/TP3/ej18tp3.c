#include <stdio.h>
#include <string.h>
//Lexico
int anio;
char res[30];
void main() {
	printf("Ingrese un anio: ");
	scanf("%d",&anio);
	if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
		strcpy(res,"Anio bisiesto");
	} else {
		strcpy(res,"Anio no bisiesto");
	}
	printf("%s\n", res);
}