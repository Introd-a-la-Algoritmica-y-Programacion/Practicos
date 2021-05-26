#include <stdio.h>  
#include <string.h>
/* Lexico*/
int edad; // edad de la persona que quiere consultar
char res[21];  //variable cadena que informa en caso que la persona sea menor
void main(){
	printf("Ingrese edad: ");
	scanf("%d",&edad);
	if (edad<=12) {
	//la persona es menor de edad
	strcpy(res,"eresNinia/o"); // Copia en res
	}
	printf("%s\n",res);
	}
