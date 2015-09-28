#include <iostream>
using namespace std;

int m, n;
string tmp;

int main() {
	cin >> m >> n;
	for(int i=1; i<=m; i++){
		cout << "Fila " << i << ": ";
		for(int j=1; j<=n; j++){
			cin >> tmp;
			cout << tmp << " ";
		}
		cout << endl;
	}
	return 0;
}