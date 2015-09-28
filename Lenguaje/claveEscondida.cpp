#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

string cad;
int N;
char x;
int cubeta[1002];


int procesar_cadena(int tam, string cadena){
	int val = 1;
	int particiones = cadena.size() / tam;
	for(int i=0; i<tam; i++){
		cubeta[i] = 0;
		for(int j= 0; j<particiones; j++){
			cubeta[i] += (toupper(cadena[i + (tam*j)]) - 64);
			//cout << cadena[i + (tam*j)] << " ";
		}
		
		//cout << cubeta[i] << " ";
		//cout << "\n";
	}
	
	
	
	for(int i=0; i < tam; i++){
		val = (val * (cubeta[i] % 10 + 1))%10;;
	}
	//cout << "=====" <<val << "\n";
	//string t = to_string(val);
	
	//cout << (t[t.size() - 1]) - '0' << "\n";
	return val%10 +1;
}

char to_letter(int numero){
	return numero + 64;	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> x >> N >> cad;
	cout << procesar_cadena(N, cad) << "-";
	cin >> x >> N >> cad;
	cout << to_letter(procesar_cadena(N, cad)) << "\n";

	return 0;
}