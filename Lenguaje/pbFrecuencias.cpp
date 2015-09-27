#include <stdio.h>

int P[102];
int n, ni;
int elementos;

int main() {
	scanf("%d %d", &n, &elementos);
	for(int i=1; i<=elementos; i++){
		scanf("%d", &ni);
		P[ni]++;
	}
	for(int i=1; i<=n; i++){
		printf("%d-%d\n", i, P[i]);
	}
	return 0;
}