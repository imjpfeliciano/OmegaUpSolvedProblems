#include <stdio.h>

int n;
float suma, tmp;
int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%f", &tmp);
		suma+=tmp;
	}
	suma /= (float)n;
	printf("%.2f\n", suma);
	return 0;
}