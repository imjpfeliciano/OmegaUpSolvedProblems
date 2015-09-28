#include <stdio.h>

int ejeX[8] = {-1, -1, -1,  0, 0,  1, 1, 1};
int ejeY[8] = {-1,  0,  1, -1, 1, -1, 0, 1};
int tablero[102][102];
char result[102][102];
int x, y;
int m, n;

void busqueda(int xx, int yy){
	result[xx][yy] = 'X';
	for(int i=0; i<8; i++){
		if(tablero[xx + ejeX[i]][yy + ejeY[i]] < tablero[xx][yy] && result[xx + ejeX[i]][yy + ejeY[i]] != 'X'){
			busqueda(xx + ejeX[i],yy + ejeY[i]);
		}
	}
}

int main(){
	scanf("%d %d %d %d", &m, &n, &x, &y);
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &tablero[i][j]);
		}
	}

	busqueda(x, y);

	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			if(result[i][j] == 'X'){
				printf("X ");
			} else {
				printf("%d ", tablero[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}