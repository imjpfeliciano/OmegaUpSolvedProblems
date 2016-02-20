#include <stdio.h>

int F, C;
int tablero[502][502];
int num_crater, peso_max = 0;
int actual, peso_tmp;

void busqueda(int x, int y){
	if(tablero[x][y] && x > 0 && x <=F && y > 0 && y <= C){
		peso_tmp += tablero[x][y];
		tablero[x][y] = 0;
		busqueda(x-1,y);
		busqueda(x,y-1);
		busqueda(x+1,y);
		busqueda(x,y+1);
	}
}

int main() {
	scanf("%d %d", &F, &C);
	for(int i=1; i<=F; i++){
		for(int j=1; j<=C; j++){
			scanf("%d", &tablero[i][j]);
		}
	}
	
	for(int j=1; j<=C; j++){
		for(int i=1; i<=F; i++){
			if(tablero[i][j]){
				peso_tmp = 0;
				actual++;
				busqueda(i, j);
				if(peso_tmp > peso_max){
					peso_max = peso_tmp;
					num_crater = actual;
				}
			}
		}
	}
	printf("%d %d\n", num_crater, peso_max);
	return 0;
}