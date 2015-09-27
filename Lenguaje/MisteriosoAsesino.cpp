#include <stdio.h>

int L, A;
int N;
int x, y;
int acum;
bool tablero[102][102];

int main(){
	scanf("%d %d %d", &L, &A, &N);
	for(int i=1; i<=N; i++){
		scanf("%d %d", &x, &y);
		tablero[x][y] = true;
	}
	
	for(int i=1; i<L; i++){
		for(int j=1; j<A; j++){
			if(!tablero[i][j] && !tablero[i][j+1] && !tablero[i+1][j] && !tablero[i+1][j+1]){
				acum++;
			}
		}
	}

	printf("%d\n", acum);
	return 0;
}