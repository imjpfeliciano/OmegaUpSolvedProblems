#include <iostream>
using namespace std;

int tablero[1002];
int sumas[1002];

int n;
int s, p;

int main() {
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &tablero[i]);
		if(tablero[i] > tablero[i-1]){
			sumas[i] = sumas[i-1] + 1;
		} else {
			sumas[i] = 1;
		}	
	}
	
	for(int i=1; i<=n; i++){
		//printf("%d ", sumas[i]);
		if(sumas[i] > s){
			s = sumas[i];
			p = i - sumas[i] + 1;
		}
	}
	
	printf("%d %d", s, p);
	return 0;
}