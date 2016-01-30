#include <iostream>
#include <algorithm>
using namespace std;

struct Nodo{
	int padre;
	int tam;
	int izquierda;
	int derecha;
	int nutriente;
};

Nodo arbol[1002];
Nodo tmp;
int N;
int pos = 1;
int suma;


void insertar(int actual, Nodo _nnodo){
	if(_nnodo.tam > arbol[actual].tam){
		if(arbol[actual].derecha != -1){
			actual = arbol[actual].derecha;
			insertar(actual, _nnodo);
		} else {
			_nnodo.padre = actual;
			arbol[actual].derecha = ++pos;
			arbol[pos] = _nnodo;
		}
	} else {
		if(arbol[actual].izquierda != -1){
			actual = arbol[actual].izquierda;
			insertar(actual, _nnodo);
		} else {
			_nnodo.padre = actual;
			arbol[actual].izquierda = ++pos;
			arbol[pos] = _nnodo;
		}
	}
}

int calculaNutrientes(int actual){
	int sumaActual = 0;
	while(actual != -1){
		sumaActual += arbol[actual].nutriente;
		actual = arbol[actual].padre;
	}	
	sumaActual += arbol[actual].nutriente;
	return sumaActual;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	cin >> N;
	cin >> tmp.tam >> tmp.nutriente;
	tmp.izquierda = tmp.derecha = tmp.padre = -1;
	
	arbol[1] = tmp;
	for(int i=2; i<=N; i++){
		cin >> tmp.tam >> tmp.nutriente;
		tmp.izquierda = tmp.derecha = -1;
		insertar(1, tmp);
	}
	
	for(int i=1; i<=N; i++){
		//cout << arbol[i].tam << ' ' << arbol[i].nutriente << ' ' << arbol[i].izquierda << ' ' << arbol[i].derecha << ' ' << arbol[i].padre << "\n"; 
		if(arbol[i].izquierda == -1 && arbol[i].derecha == -1){
			suma = max(suma, calculaNutrientes(i));
		}
	}
	
	cout << suma;
	return 0;
}