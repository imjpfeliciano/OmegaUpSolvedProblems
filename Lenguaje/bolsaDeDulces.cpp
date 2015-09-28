#include <stdio.h>
 
int bolsas;
int n, m;
int total;
 
int main() {
	scanf("%d", &bolsas);
	for(int i=1; i<=bolsas; i++){
		scanf("%d %d", &n, &m);
		total+= (n*m);
	}
	printf("%d\n", total);
	return 0;
}