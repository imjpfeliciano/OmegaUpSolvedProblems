#include <iostream>
#include <stack>
using namespace std;

stack<string> madres;
string nombre;
char tipo;
int n;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	cin >> n;
	while(n--){
		cin >> tipo >> nombre;
		if(tipo == 'F'){
			madres.push(nombre);
		} else {
			cout << nombre << ' ' << madres.top() << '\n';
			madres.pop();
		}
	}
	return 0;
}