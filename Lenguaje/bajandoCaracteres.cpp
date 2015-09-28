#include <iostream>
using namespace std;
 
string cadena;
 
int main() {
	// your code goes here
	cin >> cadena;
	int tam = cadena.size();
	for(int i=0; i<tam; i++)
		cout << cadena[i] << endl;
	return 0;
}