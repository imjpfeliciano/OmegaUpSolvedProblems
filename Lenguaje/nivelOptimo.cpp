#include <stdio.h>
#include <stdlib.h>

int a, b;

int main() {
	scanf("%d %d", &a, &b);
	if(a == b){
		printf("Nivel Optimo");
	} else {
		printf("%d %d", (a < b)? 1: 2, (a < b)? b-a: a-b);	
	}
	return 0;
}