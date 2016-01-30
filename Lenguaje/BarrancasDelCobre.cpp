#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int N, K;
int espectacularidad[50002];
int val = INT_MIN;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> N >> K;
	for(int i=1; i<=N; i++){
		cin >> espectacularidad[i];
	}
	
	for(int i=1; i<= N - K + 1; i++){
		val = max(val, espectacularidad[i + K - 1] - espectacularidad[i]);
	}
	
	cout << val;
	return 0;
}