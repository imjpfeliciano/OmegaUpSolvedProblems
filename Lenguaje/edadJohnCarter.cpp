#include <cstdio>
#include <cmath>
using namespace std;

long long int V, D;
long long int anios;

int main() {
	scanf("%lld", &V);
	while(V--){
		scanf("%lld", &D);
		anios += D;
	}
	printf("%d\n", anios/365);
	return 0;
}