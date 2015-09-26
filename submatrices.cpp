#include <stdio.h>

#define MAX 1002

int Ren, Col, r, c;
int tablero[MAX][MAX];
int stablero[MAX][MAX];
bool res[MAX][MAX];

bool isSubmatrix(int x, int y){
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if(tablero[i+x-1][j+y-1] != stablero[i][j]) return false;
		}
	}
	return true;
}

void pintar(int x, int y){
	for(int i=x; i<=x+r-1; i++){
		for(int j=y; j<=y+c-1; j++){
			res[i][j] = true;
		}
	}
}

int main(){
	//Leemos el tablero original
	scanf("%d %d", &Ren, &Col);
	for(int i=1; i<=Ren; i++){
		for(int j=1; j<=Col; j++){
			scanf("%d", &tablero[i][j]);
		}
	}

	//Leemos la submatriz
	scanf("%d %d", &r, &c);
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			scanf("%d", &stablero[i][j]);
		}
	}

	//Realizamos las validaciones
	for(int i=1; i<=Ren - r + 1; i++){
		for(int j=1; j<=Col - c + 1; j++){
			if(isSubmatrix(i, j)) pintar(i, j);
		}
	}

	//Mostramos el resultado
	for(int i=1; i<=Ren; i++){
		for(int j=1; j<=Col; j++){
			printf("%d ", res[i][j]);
		}	
		printf("\n");
	}
	return 0;
}