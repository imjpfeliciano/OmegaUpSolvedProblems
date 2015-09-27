#include <stdio.h>
#include <algorithm>
using namespace std;

long long int A, B, C, D;
long long int numerador, denominador;

int main(){
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	
	numerador = (A*D) + (B*C);
	denominador = B * D;

	long long int max_divisor = __gcd(numerador, denominador);

	numerador /= max_divisor;
	denominador /= max_divisor;

	if(numerador % denominador){
		printf("%lld %lld\n", numerador, denominador);
	} else {
		printf("%lld\n", numerador);
	}
	return 0;
}