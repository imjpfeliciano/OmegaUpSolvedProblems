#include <stdio.h>

bool esBisiesto(int anio){
	return ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0);
}

int n;
int tmp;

int main(){
		scanf("%d", &tmp);
		if(esBisiesto(tmp)){
			printf("S\n");
		} else {
			printf("N\n");
		}
	return 0;
}