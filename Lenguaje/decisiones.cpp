#include <iostream>
#define MAX 102
using namespace std;

bool grafo[MAX][MAX];
bool visitados[MAX];

int pesos[MAX];
int nnodos, decisiones;
int ini, fin;
int acum;


void busca(int pos){
	if(!visitados[pos]){
		visitados[pos] = true;
		acum += pesos[pos];
		//printf("%d %d\n", pos, pesos[pos]);
		int id = pos, peso_max = 0; 
		for(int i=0; i < nnodos; i++){
			if(pesos[i] > peso_max && !visitados[i] && grafo[pos][i]){
				peso_max = pesos[i];
				id = i;
			}
		}
		if(id == pos){
			printf("%d %d", acum, pos);
			return;
		} else {
			busca(id);
		}
	}
}

int main(){
	scanf("%d %d", &nnodos, &decisiones);

	for(int i=0; i<nnodos; i++){
		scanf("%d", &pesos[i]);
	}

	for(int i=0; i < decisiones; i++){
		scanf("%d %d", &ini, &fin);
		grafo[ini][fin] = true;
	}

	busca(0);
	return 0;
}