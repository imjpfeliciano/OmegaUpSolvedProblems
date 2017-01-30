#include <iostream>
using namespace std;

int m, k;
int mc, mt, mr;
char modo;

int value;
int total;

int main(){
	cin >> m >> k >> mc >> mt >> mr;
	while(m){
		cin >> modo;
		switch(modo){
			case 'C': value=mc; break; // 2 * 1 = 2
			case 'T': value=mt; break; // 4 * 2 = 8
			case 'R': value=mr; break; // 3 * 1 = 3
		}
		if(m - (value + mt) >= 0){
			m -= (value + mt);
			total++;
		} else {
			break;
		}
	}
	cout << total << endl;
	return 0;
}