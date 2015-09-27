#include <stdio.h>
#include <algorithm>
using namespace std;

#define MAX 500002
#define MOD 1000000007

long long int sumatoria;
int N;
int coordenadas[2][MAX];

int resuelve(int *eje){
	int val = 0;
	sort(eje, eje+N);
	
	for(int i=0; i<N; i++){
		val = (val + (long long)eje[i] * (2*i - N + 1)) % MOD;
 
	}
	return val + (val < 0 ? MOD : 0);
}

int main(){
	scanf("%d", &N);
	for(int i=0; i<N;i++){
		scanf("%d %d", &coordenadas[0][i], &coordenadas[1][i]);
	}
	
	printf("%d\n", (resuelve(coordenadas[0]) + resuelve(coordenadas[1])) % MOD);
	
	return 0;
}