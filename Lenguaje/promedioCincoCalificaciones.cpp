#include <stdio.h>

float suma, tmp;
int main(){
	for(int i=1; i<=5; i++){
		scanf("%f", &tmp);
		suma+=tmp;
	}
	suma /= 5.0;
	printf("%.1f\n", suma);
	return 0;
}