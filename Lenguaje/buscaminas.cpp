#include <stdio.h>

int M, N;
int tmp;
int tablero[202][202];


int main(){
	scanf("%d %d", &M, &N);
	for(int i=1; i<=M; i++){
		for(int j=1; j<=N; j++){
			scanf("%d", &tmp);
			if(tmp){
				tablero[i-1][j-1]++;
				tablero[i-1][j]++;
				tablero[i-1][j+1]++;
				tablero[i][j-1]++;
				tablero[i][j]++;
				tablero[i][j+1]++;
				tablero[i+1][j-1]++;
				tablero[i+1][j]++;
				tablero[i+1][j+1]++;
			}
		}
	}

	for(int i=1; i<=M; i++){
		for(int j=1; j<=N; j++){
			printf("%d ", tablero[i][j]);
		}
		printf("\n");
	}
	return 0;
}