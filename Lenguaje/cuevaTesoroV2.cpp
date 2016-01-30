#include <iostream>
#include <stack>
#define MAX 5002
using namespace std;

int arbol[MAX];
int actual;
int nodos, bifurcaciones, elemento;
int padre, derecha, izquierda;
stack<int> recorrido;

int main() {
	
	scanf("%d %d %d", &nodos, &bifurcaciones, &elemento);
	
	for(int i=1; i<=bifurcaciones; i++){
		scanf("%d %d %d", &padre, &izquierda, &derecha);
		arbol[izquierda] = padre;
		arbol[derecha] = padre;
	}
	
	actual = elemento;
	recorrido.push(elemento);
	
	while(arbol[actual]){
		recorrido.push(arbol[actual]);
		actual = arbol[actual];
	}
	
	printf("%d\n", recorrido.size());
	
	while(!recorrido.empty()){
		printf("%d\n", recorrido.top());
		recorrido.pop();
	}

	return 0;
}