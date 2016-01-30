#include <iostream>
#include <queue>
using namespace std;
#define MAX 20000

typedef struct{
	long long int val;
	long long int nivel;
}Nodo;

struct compare  
{  
  bool operator()(Nodo l, Nodo r)  
  {  
      return l.val > r.val;  
  }  
};  


long long int M, N;
long long int pasos;
Nodo actual, tmp;

bool visitados[MAX + 2];
priority_queue<Nodo, vector<Nodo>, compare> cola;

int main() {
	cin >> M >> N;
	
	Nodo _nnodo;
	//Creamos la raiz a partir del numero M
	_nnodo.val = M;
	_nnodo.nivel = 0;
	
	cola.push(_nnodo);
	
	while(cola.top().val != N){
		actual = cola.top();
		cola.pop();
		if(actual.val - 1 == N || actual.val * 2 == N){
			break;
		} else {
			if(actual.val - 1 > 0){
				if(!visitados[actual.val -1 ]){
					visitados[actual.val - 1] = true;
					tmp.val = actual.val - 1;
					tmp.nivel = actual.nivel + 1;
					cola.push(tmp);
				}
			}
			
			if(actual.val * 2 <= MAX){
				if(!visitados[actual.val * 2]){
					visitados[actual.val * 2] = true;
					tmp.val = actual.val * 2;	
					tmp.nivel = actual.nivel + 1;
					cola.push(tmp);
				}
			}
			
			//cout << actual.val -1 << ' ' << actual.val * 2 << endl;
		}
	}
	
	cout << actual.nivel + 1;


	return 0;
}