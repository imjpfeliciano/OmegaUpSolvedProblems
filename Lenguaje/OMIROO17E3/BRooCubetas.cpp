#include <iostream>
using namespace std;

int n;
int value;
int cantidad;
int cubeta[10002];

int main(){
	cin >> n;
	while(n--){
		cin >> value;
		if(!cubeta[value]) cantidad++;
		cubeta[value] = 1;
	}
	cout << cantidad << endl;
	return 0;
}