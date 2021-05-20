#include <stdio.h>
#include <string.h>//compraComputadora
/* Lexico*/
float precioOficial, precioNoOficial;
float PorcentajeCostoEnvio = 1;
char res[21]; // variable cadena que almacena donde conviene comprar la computadora
void main(){
  printf("Ingrese precio de la pagina oficial: ");
  scanf("%f",&precioOficial);
  printf("Ingrese precio de la pagina no oficial: ");
  scanf("%f",&precioNoOficial);
  precioOficial = precioOficial * (1+ PorcentajeCostoEnvio /100);
  if(precioOficial <= precioNoOficial) {
      strcpy(res,"Conviene comprar en la pagina oficial"); // Copia en res
  }else {
      strcpy(res,"Conviene comprar en la pagina no oficial");
  }
  printf(res);
}
