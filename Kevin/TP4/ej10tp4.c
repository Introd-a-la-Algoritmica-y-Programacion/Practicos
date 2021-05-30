#include <stdio.h>
#include <string.h>
//Lexico//
int i, n, existeAlgunDivisor;
char res[21];
int main() {
	do {
		printf("Ingrese un numero (mayor a 1) que quiera saber si es primo o no\n"); //por convencion el 1 no se considera numero primo
		scanf("%d",&n);
	} while (n <= 1);
	existeAlgunDivisor = 0; //variable del tipo logico que me dice si existe algun divisor diferente de 1 y n, de un numero n
	i = 2; //arranco con 2 porque todos los numeros son divisibles por 1
	//pongo esta condicion en el while para que corte el ciclo ni bien aparezca un divisor distinto de 1
	while (i*i <= n && existeAlgunDivisor == 0) {
		if(n % i == 0){
			existeAlgunDivisor = 1;
		}
		i = i + 1;
	}
	if (existeAlgunDivisor == 0){
		strcpy(res, "es primo");
	}else{
		strcpy(res, "no es primo");
	}
	printf("El numero ingresado %s\n", res);
	return 0;
}

