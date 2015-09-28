#include <stdio.h>

int V, H, tablero[1002][1002], k, m, n;
char vuelta;

void vv(){
	int tmp;
	for(int i=1; i<=(m/2); i++){
		for(int j=1; j<=n; j++){
			tmp = tablero[i][j];
			tablero[i][j] = tablero[m - i + 1][j];
			tablero[m - i + 1][j] = tmp;
		}
	}
}

void vh(){
	int tmp;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=(n/2); j++){
			tmp = tablero[i][j];
			tablero[i][j] = tablero[i][n - j + 1];
			tablero[i][n - j + 1] = tmp;
		}
	}
}
int main(){
	scanf("%d %d", &m, &n);
	//Leemos el arreglo
	for(int i=1; i<=m; i++){
		for(int j=1;j<=n;j++){
			scanf("%d", &tablero[i][j]);
		}
	}
	//Leemos las vueltas
	scanf("%d", &k);
	for(int i=1; i<=k; i++){
		scanf(" %c", &vuelta);
		if(vuelta == 'V') V++;
		else H++;
	}

	V = V % 2;
	H = H % 2;

	//Aplicamos las vueltas
	if(V) vv();
	if(H) vh();

	//Mostramos el resultado
	for(int i=1; i<=m;i++){
		for(int j=1; j<=n; j++){
			printf("%d ", tablero[i][j]);
		}
		printf("\n");
	}
	return 0;
}