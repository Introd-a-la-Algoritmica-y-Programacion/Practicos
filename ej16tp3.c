#include <stdio.h>
#include <string.h>
//Lexico//
float a, b, c, d;
char res[80];
void main(){
	printf("Ingrese el valor del coeficiente a de la ecuacion cuadratica: ");
	scanf("%f",&a);
	printf("Ingrese el valor del coeficiente b de la ecuacion cuadratica: ");
	scanf("%f",&b);
	printf("Ingrese el valor del coeficiente c de la ecuacion cuadratica: ");
	scanf("%f",&c);
	d = (b * b - 4 * c);
	if(a==0 && b==0){
		strcpy(res,"La ecuacion es degenerada");
		}else{
			if(a==0 && b!=0){
				strcpy(res,"La ecuacion tiene una unica raiz");
				}else{
					if(a!=0 && d>0){
						strcpy(res,"La ecuacion tiene dos raices reales");
						}else{
							if(a!=0 && d==0){
								strcpy(res,"La ecuacion tiene una unica raiz");
							} else {
								strcpy(res,"La ecuacion tiene dos raices complejas");
							}
						}
					}
				}
	printf("%s\n",res);	
	}
