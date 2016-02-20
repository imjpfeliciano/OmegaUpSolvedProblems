#include <iostream>
#include <queue>
using namespace std;

struct _ura{
	int value;
	int movs;
};

bool visitados[10002];
int A, B, N;
_ura tmp, actual;
int numpasos;
queue<_ura> cola;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	cin >> A >> B >> N;	
	
	tmp.value = 1;
	tmp.movs = 0;
	
	cola.push(tmp);
	
	while(!cola.empty()){
		actual = cola.front();
		if(actual.value == N) break;
		cola.pop();
		
		if(visitados[actual.value]) continue;
		visitados[actual.value] = true;
		
		tmp.value = (actual.value * A) >= 9999 ? 1 : actual.value * A;
		tmp.movs = actual.movs + 1;
		cola.push(tmp);

		tmp.value = actual.value / B;
		cola.push(tmp);

	}
	
	cout << actual.movs;
	return 0;
}