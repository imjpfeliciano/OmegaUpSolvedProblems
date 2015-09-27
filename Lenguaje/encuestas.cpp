#include <stdio.h>

int par, impar;
int n;
int tmp;

int main() {
	scanf("%d", &n);
	while(n--){
		scanf("%d", &tmp);
		if(tmp%2) impar++;
		else par++;
	}
	printf("%d %d",par, impar);
	return 0;
}