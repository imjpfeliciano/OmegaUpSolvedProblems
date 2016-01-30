#include <iostream>
using namespace std;

struct Nodo{
	bool existe;
	int izq = -1;
	int der = -1;
	int col;
};

struct rango{
	int mincol = 999999;
	int maxcol = 0;
	int distancia;
};

int aristas;
int pos;
Nodo arbol[1002];
rango niveles[1002];
int columna = 1;
int maxnivel, maxanchura = 0;

void inorden(int elem, int nivel){
	if(arbol[elem].existe){
		inorden(arbol[elem].izq, nivel + 1);
		//printf("%d %d %d\n", elem, nivel, columna);
		arbol[elem].col = columna;
		if(columna < niveles[nivel].mincol) niveles[nivel].mincol = columna;
		if(columna > niveles[nivel].maxcol) niveles[nivel].maxcol = columna;
		niveles[nivel].distancia = niveles[nivel].maxcol - niveles[nivel].mincol + 1;
		columna++;
		inorden(arbol[elem].der, nivel + 1);
	}
}

int main() {
	scanf("%d", &aristas);
	
	for(int i=1; i<=aristas; i++){
		scanf("%d", &pos);	
		arbol[pos].existe = true;
		scanf("%d %d", &arbol[pos].izq, &arbol[pos].der);
	}
	
	inorden(1, 1);
	
	for(int i=1; i<=aristas; i++){
		if(niveles[i].distancia > maxanchura){
			maxanchura = niveles[i].distancia;
			maxnivel = i;
		}	
	}
	
	printf("%d %d", maxnivel, maxanchura);
	return 0;
}