#include <iostream>
#include <math.h>
using namespace std;

string n1, n2;

int cambiar(string N, char V, char NV){
	int VAL = 0;
	for(int i=0; i<N.size(); i++){
		if(N[i] == V){
			N[i] = NV;
		}
	}

	for(int i=0, potencia=N.size() - 1; i<N.size(); i++, potencia--){
		VAL += ((N[i] - '0') * pow(10, potencia)); 
	}

	return VAL;
}

void sumar_minimo(string A, string B){
	cout << cambiar(A,'6', '5') + cambiar(B, '6', '5') << endl;
}

void sumar_maximo(string A, string B){
	cout << cambiar(A, '5', '6') + cambiar(B, '5', '6') << endl;
}

int main(){
	cin >> n1 >> n2;
	sumar_minimo(n1, n2);
	sumar_maximo(n1, n2);
	return 0;
}

//1235 1651