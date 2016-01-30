#include <iostream>
#include <queue>
using namespace std;

struct punto{
	int fila;
	int columna;
	int pasos;
};

int tablero[52][52];
int visitados[52][52];
int f, c;
int ax, ay, bx, by;
int pasos = 3000;
punto p, q;
queue<punto> cola;
int ejeX[4] = {-1, 0, 1, 0};
int ejeY[4] = {0, -1, 0, 1};

void BFS(){
	while(!cola.empty()){
		p = cola.front();
		cola.pop();
		if(p.fila == bx && p.columna == by){
			pasos = p.pasos;
			return;
		}
		
		if(visitados[p.fila][p.columna]) continue;
		visitados[p.fila][p.columna] = 1;
		
		for(int i=0; i<4; i++){
			if(p.fila + ejeX[i] >= 0 && p.columna + ejeY[i] >= 0 && p.fila + ejeX[i] < f && p.columna + ejeY[i] < c){
				q.fila = p.fila + ejeX[i];
				q.columna = p.columna + ejeY[i];
				q.pasos = p.pasos + 1;
				cola.push(q);
			}
		}
	}	
}

int main() {
	scanf("%d %d", &f, &c);
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			scanf("%d", &tablero[i][j]);
			if(tablero[i][j]) visitados[i][j] = 1;
		}
	}
	scanf("%d %d %d %d", &ax, &ay, &bx, &by);
	
	p.fila = ax;
	p.columna = ay;
	p.pasos = 1;
	
	cola.push(p);
	
	BFS();
	
	printf("%d", pasos);
	return 0;
}