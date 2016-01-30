#include <iostream>
using namespace std;
#define MAX 2002

int colores[MAX];
int cubeta[MAX];
int N, M;
int a, b;
long long int sumatoria;

void createset(int x){
	colores[x] = x;
	cubeta[x] = 0;
}

int findset(int x){
	return colores[x];
}

void mergeset(int x, int y){
	int newcolor = colores[x];
	int oldcolor = colores[y];
	
	for(int i=1; i<=N; i++){
		if(colores[i] == oldcolor){
			colores[i] = newcolor;
		}
	}	
}

int main() {
	scanf("%d %d", &N, &M);
	
	for(int i=1; i<=N; i++){
		createset(i);
	}
	
	for(int i=1; i<=M; i++){
		scanf("%d %d", &a, &b);
		if(findset(a) != findset(b)){
			mergeset(a, b);
		}
	}
	
	for(int i=1; i<=N; i++){
		cubeta[colores[i]]++;
	}
	
	for(int i=1; i<=N; i++){
		sumatoria += (cubeta[i] * (N - cubeta[i]));
	}
	
	printf("%lld", sumatoria/2);
	return 0;
}