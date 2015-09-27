#include <stdio.h>

int F, C;
char tablero[1002][1002];
int puentes;
bool infectado;

int ejeX[4] = {-1,  0, 1, 0};
int ejeY[4] = { 0, -1, 0, 1};

void busqueda(int x, int y){
	if(tablero[x][y] == 'x') { infectado = true; }
	tablero[x][y] = '.';

	for(int i=0; i<4; i++){
		if((tablero[x + ejeX[i]][y + ejeY[i]] != '.') && (x + ejeX[i] >= 1)  && (x + ejeX[i] <= F) && (y + ejeY[i] >= 1) && (y + ejeY[i] <= C)){
			busqueda(x + ejeX[i], y + ejeY[i]);
		}
	}

}

int main(){
	scanf("%d %d", &F, &C);

	//Lectura de datos
	for(int i=1; i<=F; i++){
		for(int j=1; j<=C; j++){
			scanf(" %c", &tablero[i][j]);
		}
	}

	//Eliminacion de islas
	for(int i=1; i<=F; i++){
		for(int j=1; j<=C; j++){
			if(tablero[i][j] != '.'){
				infectado = false;
				busqueda(i, j);
				if(!infectado) puentes++;
			}
		}
	}


	if(puentes != 0){
		puentes--;
	}

	printf("%d\n", puentes);
	return 0;
}