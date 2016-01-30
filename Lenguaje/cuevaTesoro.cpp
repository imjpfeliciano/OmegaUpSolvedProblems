#include <iostream>
#include <stack>
#define MAX 5002
using namespace std;


typedef struct{
	int padre;
	int der;
	int izq;
}Nodo;

Nodo arbol[MAX];
Nodo actual;
int nodos, bifurcaciones, elemento;
int padre, derecha, izquierda;
stack<int> recorrido;

int main() {
	scanf("%d %d %d", &nodos, &bifurcaciones, &elemento);
	
	for(int i=1; i<=bifurcaciones; i++){
		scanf("%d %d %d", &padre, &izquierda, &derecha);
		arbol[padre].izq = izquierda;
		arbol[padre].der = derecha;
		arbol[izquierda].padre = padre;
		arbol[derecha].padre = padre;
	}
	
	actual = arbol[elemento];
	recorrido.push(elemento);
	while(actual.padre){
		recorrido.push(actual.padre);
		actual = arbol[actual.padre];
	}
	printf("%d\n", recorrido.size());
	
	while(!recorrido.empty()){
		printf("%d\n", recorrido.top());
		recorrido.pop();
	}
	return 0;
}