#include <stdio.h>
#include <string.h>
//Lexico//
char contrasenia[21], confirmarContrasenia[21];
int main() {
	printf("Ingrese su contrasenia: ");
	fgets(contrasenia,21,stdin);
	do {
		printf("Confirme su contrasenia: ");
		fgets(confirmarContrasenia,21,stdin);
	}while (strcmp(contrasenia, confirmarContrasenia)!=0);  //mientras sean distitnos va a seguir ciclando. 
	printf("La contrasenia se ha ingresado con éxito\n");
}
