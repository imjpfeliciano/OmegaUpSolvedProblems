#include <climits>
#include <iostream>
using namespace std;

int N;
int tablero[30002];
int unos[30002];
int dos[30002];
int acum;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	cin >> N;
	for(int i = 1; i <= N ; i++){
		cin >> tablero[i];
		//cout << tablero[i] << ' ';
	}
	//cout << "\n";
	
	for(int i = 1; i <= N; i++){
		if(tablero[i] == 2){
			acum++;
		}
		unos[i] = acum;
		//cout << unos[i] << ' ';
	}
	//cout << "\n";
	
	acum = 0;
	for(int i = N; i>= 1; i--){
		if(tablero[i] == 1){
			acum++;
		}
		dos[i] = acum;
	}
	//for(int i=1; i<=N; i++){
		//cout << dos[i] << ' ';
	//}
	//cout << "\n";
	acum = INT_MAX;
	for(int i=0; i<=N; i++){
		acum = min(acum, unos[i] + dos[i + 1]);
	}
	
	//cout << "\n";
	cout << acum;

	return 0;
}