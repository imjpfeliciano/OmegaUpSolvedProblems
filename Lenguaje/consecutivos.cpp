#include <stdio.h>

int _min = 100000, _max = 0, gaussiana, sumatoria, n;
int tmp;

int gauss(int k){
	return (k * (k+1))/2;
}

int main() {
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &tmp);
		if(tmp < _min) _min = tmp;
		if(tmp > _max) _max = tmp;
		sumatoria += tmp;
	}
	gaussiana = gauss(_max) - gauss(_min-1);
	
	if(gaussiana == sumatoria){
		printf("SI");
	} else {
		printf("NO");
	}
	return 0;
}