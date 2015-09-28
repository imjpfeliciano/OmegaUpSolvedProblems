#include <stdio.h>
 
long long int bolsas;
long long int n, m;
long long int total;
 
int main() {
	scanf("%d", &bolsas);
	for(int i=1; i<=bolsas; i++){
		scanf("%lld %lld", &n, &m);
		total+= (n*m);
	}
	printf("%lld\n", total);
	return 0;
}