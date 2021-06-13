#include <stdio.h>
#include <string.h>
//Lexico//
struct TFecha{
	int dia;
	int mes;
	int anio;
} fecha1, fecha2, fecha3, fecha4;

int auxDiasTranscurridos;
int diasEntreDosFechas;
char diaDeLaSemana[21];
int anioBisiesto(int a); //funcion de tipo logico
int diasPorAnio(int a);
int diasPorMes(int m);
int diasPorDia(int d);
int diasPorAniosBisiesto(int m, int a);
int diasTranscurridos(struct TFecha f);

int main(){
	do{
	printf("Ingrese una fecha posterior al 01 01 1900  bajo el formato dia mes anio: ");
	scanf("%d %d %d", &fecha1.dia, &fecha1.mes, &fecha1.anio);
	}while(fecha1.dia < 1 || fecha1.dia > 31 || fecha1.mes < 1 || fecha1.mes > 12 || fecha1.anio < 1900);
	auxDiasTranscurridos = diasTranscurridos(fecha1);
	printf("Los dias transcurridos desde el 01 01 1900 hasta la fecha ingresada son: %d\n" ,auxDiasTranscurridos);
	do{
	printf("Ingrese una fecha posterior al 01 01 1900  bajo el formato dia mes anio: ");
	scanf("%d %d %d", &fecha2.dia, &fecha2.mes, &fecha2.anio);
	}while(fecha2.dia < 1 || fecha2.dia > 31 || fecha2.mes < 1 || fecha2.mes > 12 || fecha2.anio < 1900);
	do{
	printf("Ingrese otra fecha posterior al 01 01 1900  bajo el formato dia mes anio: ");
	scanf("%d %d %d", &fecha3.dia, &fecha3.mes, &fecha3.anio);
	}while(fecha3.dia < 1 || fecha3.dia > 31 || fecha3.mes < 1 || fecha3.mes > 12 || fecha3.anio < 1900);
	if (diasTranscurridos(fecha3) >= diasTranscurridos(fecha2)){
		diasEntreDosFechas = diasTranscurridos(fecha3) - diasTranscurridos(fecha2);
	}else{
		diasEntreDosFechas = diasTranscurridos(fecha2) - diasTranscurridos(fecha3);
	}
	printf("Los dias transcurridos entre las dos fechas ingresadas son: %d\n" ,diasEntreDosFechas);
	do{
	printf("Ingrese una fecha posterior al 01 01 1900  bajo el formato dia mes anio: ");
	scanf("%d %d %d", &fecha4.dia, &fecha4.mes, &fecha4.anio);
	}while(fecha4.dia < 1 || fecha4.dia > 31 || fecha4.mes < 1 || fecha4.mes > 12 || fecha4.anio < 1900);
	//aca calculo el dia de la semana que es, se me complico para hacerlo con una funcion que devuelva strings//

		if(diasTranscurridos(fecha4) % 7 == 0){
		strcpy(diaDeLaSemana,"Lunes");
	}else{
		if(diasTranscurridos(fecha4) % 7 == 1){
			strcpy(diaDeLaSemana,"Martes");
		}else{
			if(diasTranscurridos(fecha4) % 7 == 2){
				strcpy(diaDeLaSemana,"Miercoles");
			}else{
				if(diasTranscurridos(fecha4) % 7 == 3){
					strcpy(diaDeLaSemana,"Jueves");
				}else{
					if(diasTranscurridos(fecha4) % 7 == 4){
						strcpy(diaDeLaSemana,"Viernes");
					}else{
						if(diasTranscurridos(fecha4) % 7 == 5){
							strcpy(diaDeLaSemana,"Sabado");
						}else{
							strcpy(diaDeLaSemana,"Domingo");
						}
					}
				}
			}
		}
	}
	printf("EL dia de la semana correspondiente a esa fecha es: %s\n", diaDeLaSemana);
	return 0;
}

//fin del main
//implementacion de las funciones

int anioBisiesto(int a){
	if ((a % 4 == 0) && ((a % 100 != 0) || (a % 400 == 0))){
		return 1;
	}else{
		return 0;
	}
}

int diasPorAnio(int a){
int aux;
	aux = (a - 1900) * 365;
	return aux;
}

int diasPorMes(int m){
	if(m == 1){
		return 0;
	}else{
		if(m == 2){
			return 31;
		}else{
			if(m ==3){
				return 59;
			}else{
				if(m == 4){
					return 90;
				}else{
					if (m == 5){
						return 120;
					}else{
						if(m == 6){
							return 151;
						}else{
							if(m == 7){
								return 181;
							}else{
								if (m == 8){
									return 212;
								}else{
									if(m == 9){
										return 243;
									}else{
										if(m == 10){
											return 273;
										}else{
											if(m == 11){
												return 304;
											}else{
												return 334;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int diasPorDia(int d){
int aux;
	aux = d - 1;
	return aux;
}

int diasPorAniosBisiesto(int m, int a){
int aux;
int i;
	aux = 0;
	//el ciclo lo hago hasta el anio anterior//
	for(i = 1900; i < a; i++){
		if(anioBisiesto(i) == 1){
			aux = aux + 1;
		}
	}
	//para evaluar el anio de la fecha chequeo ademas que el dia sea despues de febrero//
	if (anioBisiesto(a) == 1){
		if(m > 2){
			aux = aux + 1;
		}
	}
	return aux;
}

int diasTranscurridos(struct TFecha f){
int aux;
	aux = diasPorAnio(f.anio) + diasPorAniosBisiesto(f.mes, f.anio) + diasPorMes(f.mes) + diasPorDia (f.dia);
	return aux;;
}


