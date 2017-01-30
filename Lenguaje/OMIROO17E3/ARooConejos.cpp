#include <iostream>
using namespace std;

int fibo[30];
int value;

int fibonacci(int n){
	if(n <= 2){	
		return 1;
	} else {
		if(fibo[n]){
			return fibo[n];
		} else {
			fibo[n] = fibonacci(n-1) + fibonacci(n-2);
			return fibo[n];
		}
	}
};

int main(){
	fibo[1] = 1;
	fibo[2] = 1;

	cin >> value;
	cout << fibonacci(value) << endl;
	return 0;
}