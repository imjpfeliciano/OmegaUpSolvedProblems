#include <iostream>
#include <algorithm>
#define MAX 30002
using namespace std;

typedef struct{
	int val;
	int ini;
	int fin;
}edge;

edge aristas[200002];
int colores[MAX];
int ciudades, caminos;
int distancia;

bool comp(edge a, edge b){
	return a.val < b.val;
}

int _find(int x){
	while(x != colores[x]){
		colores[x] = colores[colores[x]];		//path-compression
		x = colores[x];
	}
	return x;
}

void _union(int x, int y){
	colores[_find(x)] = _find(y);	
}

void kruskalMST(){
	int e = 0;
	int pos = 0;
	while(e < ciudades - 1){
		if(_find(aristas[pos].ini) != _find(aristas[pos].fin)){
			distancia += aristas[pos].val;
			_union(aristas[pos].ini, aristas[pos].fin);
			e++;
		}
		pos++;
	}
	printf("%d", distancia);
}

int main() {
	scanf("%d %d", &ciudades, &caminos);
	for(int i=1; i<=ciudades; i++){
		colores[i] = i;	
	}
	
	for(int i=1; i<=caminos; i++){
		scanf("%d %d %d", &aristas[i].ini, &aristas[i].fin, &aristas[i].val);
	}
	
	sort(aristas + 1, aristas + caminos + 1, comp);
	
	kruskalMST();
	return 0;
}