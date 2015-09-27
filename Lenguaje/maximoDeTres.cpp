#include <stdio.h>
#include <algorithm>
using namespace std;

long long int n;
long long int mayor;


int main() {
	for(int i=1; i<=3; i++){
		scanf("%lld", &n);
		if(n > mayor) mayor = n;
	}
	printf("%lld", mayor);
	return 0;
}