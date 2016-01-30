#include <iostream>
using namespace std;

long long int N;

long long int isHappy(long long int number){
	long long int suma;
	for(int i=1; i<=8; i++){
		suma = 0;
		while(number){
			suma += ((number%10) * (number%10));
			number /= 10;
		}
		if(suma == 1)
			return i;
		number = suma;
	}
	return -1;
}

int main() {
	cin >> N;
	cout << isHappy(N) << endl;
	return 0;
}