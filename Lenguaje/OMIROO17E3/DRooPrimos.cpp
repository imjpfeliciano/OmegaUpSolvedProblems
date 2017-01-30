#include <iostream>
#include <cmath>
using namespace std;

int n;
int criba[1002];

void precalcula(){
	for(int i=2; i<=sqrt(1000); i++){
		if(!criba[i]){
			for(int j=i+1; j * i<=1000; j++){
				criba[i * j] = 1;
			}
		}
	}
}

int main(){
	precalcula();
	cin >> n;
	for(int i=2; i<=n; i++){
		if(!criba[i]){
			cout << i << ' ';
		}
	}
	return 0;
}