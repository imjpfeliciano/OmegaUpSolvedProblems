#include <stdio.h>
#include <stdlib.h>

int N, M, K;
int tablero[502][502];
bool visitados[502][502];
int mayor;
int x, y;
int tam;

void busqueda(int xx, int yy, int anterior){
	if(!visitados[xx][yy] && xx > 0 && xx <=M && yy > 0 && yy <=N && anterior - tablero[xx][yy] <= K){
		visitados[xx][yy] = true;
		tam++;
		busqueda(xx-1, yy, tablero[xx][yy]);
		busqueda(xx+1, yy, tablero[xx][yy]);
		busqueda(xx, yy-1, tablero[xx][yy]);
		busqueda(xx, yy+1, tablero[xx][yy]);
	}
}

int main(){
	scanf("%d %d %d", &M, &N, &K);
	for(int i=1; i<=M; i++){
		for(int j=1; j<=N; j++){
			scanf("%d", &tablero[i][j]);
			if(mayor < tablero[i][j]){
				mayor = tablero[i][j];
				x = i;
				y = j;
			}
		}
	}

	//visitados[x][y] = true;
	//printf("%d\n", mayor);
	busqueda(x, y, tablero[x][y]);
	printf("%d\n", tam);
	return 0;
}