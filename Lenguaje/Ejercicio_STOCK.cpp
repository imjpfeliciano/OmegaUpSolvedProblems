#include <stdio.h>
int n;
int pila[1000002];

int main() {
	// your code goes here
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &pila[i]);
	}
	for(int i=n; i>=1; i--){
		printf("%d\n", pila[i]);
	}
	return 0;
}