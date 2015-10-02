#include <stdio.h>
#include <algorithm>
using namespace std;

struct coordenada{
	int x;
	int y;
};

coordenada tablero[100002];
coordenada tmp;
int n, k;
bool bandera;

bool porEjeX(coordenada a, coordenada b){
	return a.x < b.x;
}

int main() {
	scanf("%d %d", &n, &k);
	for(int i=1; i<=n; i++){
		scanf("%d %d", &tmp.x, &tmp.y);
		tablero[i] = tmp;
	}			
	sort(tablero+1, tablero+n+1, porEjeX);
	
	for(int i=1; i<=k; i++){
		scanf("%d %d", &tmp.x, &tmp.y);
		bandera = false;
		for(int j=1; j<=n; j++){
			if(tablero[j].x == tmp.x && tablero[j].y == tmp.y){
				bandera = true;
				break;
			}
		}
		printf("%d\n", (bandera) ? 0 : 1);
	}
	return 0;
}