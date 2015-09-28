#include <stdio.h>

int a, b;
int main(){
	scanf("%d %d", &a, &b);
	if(a == b){
		printf("iguales\n");
	} else {
		(a > b) ? printf("mayor\n") : printf("menor\n");
	}
	return 0;
}