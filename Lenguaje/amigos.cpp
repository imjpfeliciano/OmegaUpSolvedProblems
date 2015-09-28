#include <iostream>
#include <map>
using namespace std;

map<string, int> nombres;
int tablero[1002][1002];
string tmp;
int P;
string ini, fin;
int N;

int main(){
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> tmp;
		nombres[tmp] = i;
	}

	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			cin >> tablero[i][j];

	cin >> P;
	while(P--){
		cin >> ini >> fin;
		cout << tablero[nombres[ini]][nombres[fin]] << "\n";
	}

	return 0;
}