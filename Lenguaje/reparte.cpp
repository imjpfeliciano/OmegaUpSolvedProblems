#include <stdio.h>

int P, N;
int total;
int tmp;

int main() {
	scanf("%d %d",&P, &N);
	for(int i=1; i<=N; i++){
		scanf("%d", &tmp);
		total += tmp;
	}

	printf("%d %d", total / P, total % P);
	return 0;
}