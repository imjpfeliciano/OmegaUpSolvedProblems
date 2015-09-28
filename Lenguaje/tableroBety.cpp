#include <stdio.h>
#include <stdlib.h>

int tablero[102][102];
int m, n, k;
int cubeta[6];
int operacion;

int main(){
	scanf("%d %d %d", &m, &n, &k);
	for(int i=0; i<k; i++){
		scanf("%d", &operacion);
		cubeta[operacion]++;
	}

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%d", &tablero[i][j]);

	cubeta[1] %= n;
	cubeta[2] %= n;
	cubeta[3] %= m;
	cubeta[4] %= m;

	int x = ((cubeta[1] - cubeta[2]) + n)%n;
	int y = ((cubeta[3] - cubeta[4]) + m)%m;

	//printf("%d %d\n", x, y);


	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ", tablero[(x + i)%n][(y + j)%m]);
		}
		printf("\n");
	}

	return 0;
}