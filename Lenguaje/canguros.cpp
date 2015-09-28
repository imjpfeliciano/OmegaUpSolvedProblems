#include <stdio.h>
#include <queue>
using namespace std;

queue<int> canguros;
int comida;
int acciones;
char accion;
int peques;

int main(){
	scanf("%d %d", &comida, &acciones);
	for(int i=1; i<=acciones; i++){
		scanf(" %c", &accion);
		switch(accion){
			case 'N':
				scanf("%d", &peques);
				canguros.push(peques);
				break;
			case 'A':
				comida-= canguros.front() + 1;
				canguros.pop();
				break;
			case 'C':
				printf("%d\n", canguros.size());
				break;
			case 'R':
				printf("%d\n", comida);
				break;
		}
	}
	return 0;
}