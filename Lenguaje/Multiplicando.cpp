#include <stdio.h>

long long int x;
long long int fact=1;

int main() {
	scanf("%lld", &x);
	for(long long int i=1; i<=x; i++){
		fact = fact*i;
	}
	printf("%lld", fact);
	return 0;
}