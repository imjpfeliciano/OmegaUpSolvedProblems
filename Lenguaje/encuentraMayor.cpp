#include <stdio.h>

int tmp, mayor;
int n;

int main(){
	scanf("%d", &n);
	while(n--){
		scanf("%d", &tmp);
		mayor = (tmp > mayor) ? tmp : mayor;
	}
	printf("%d\n", mayor);
	return 0;
}