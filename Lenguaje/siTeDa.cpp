#include <cstdio>
using namespace std;

int x, y;
int tmp;
int ini, fin;
bool bandera;
int pasos;

int main() {
	scanf("%d %d", &ini, &fin);
	printf("%d %d ", ini, fin);
	x = ini;
	y = fin;
	bandera = true;
	while(true){
		if(bandera){
			//primera vuelta
			x = y;
			y = (ini + fin)%10;
			printf("%d ", y);
			bandera = false;
		} else {
			tmp = y;
			y = (x + y)%10;
			x = tmp;
			printf("%d ", y);
		}	
		pasos++;
		if(x == ini && y == fin) break;
	}
	printf("\n%d", pasos);
	return 0;
}