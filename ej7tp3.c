#include <stdio.h> 
//Lexico//
float tAnd1, tAnd2, tAnd3, t1, t2, t3;
void main(){
	//obtener datos
	printf("Ingrese el tiempo del andarivel 1: ");
	scanf("%f",&tAnd1);
	printf("Ingrese el tiempo del andarivel 2: ");
	scanf("%f",&tAnd2);
	printf("Ingrese el tiempo del andarivel 3: ");
	scanf("%f",&tAnd3);
	if (tAnd1 <= tAnd2 && tAnd2 <= tAnd3) {
		t1 = tAnd1;
		t2 = tAnd2;
		t3 = tAnd3;
	}else {
		if ( tAnd1 <= tAnd3 && tAnd3 <= tAnd2) {
			t1 = tAnd1;
			t2 = tAnd3;
			t3 = tAnd2;
		}else {
			if (tAnd2 <= tAnd1 && tAnd1<= tAnd3) {
				t1 = tAnd2;
				t2 = tAnd1;
				t3 = tAnd3;
			}else {
				if (tAnd2 <= tAnd3 && tAnd3 <= tAnd1) {
					t1 = tAnd2;
					t2 = tAnd3;
					t3 = tAnd1;
				}else {
					if (tAnd3 <= tAnd1 && tAnd1 <= tAnd2) {
							t1 = tAnd3;
							t2 = tAnd1;
							t3 = tAnd2;
					}else {
							t1 = tAnd3;
							t2 = tAnd2;
							t3 = tAnd1;
						
					}
				}
			}
		}
	}
printf("El tiempo ganador es %.2f\n", t1);
printf("El tiempo del segundo puesto es %.2f\n", t2);
printf("El tiempo del tercer puesto es %.2f\n", t3);
}

