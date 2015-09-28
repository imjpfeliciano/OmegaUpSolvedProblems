#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector<string> pila;
char op;
string id;
int num;
int tope;

int main() {
	// your code goes here
	while(scanf(" %c", &op) != EOF){
		//printf("%c ---\n", op);
		switch(op){
			case 'D':
				cin >> id;
				pila.push_back(id);
				break;
			case 'P':
				cin >> id;
				num = 0;
				tope = pila.size() - 1;
				while(pila[tope] != id){
					tope--;
					num++;
				}
				printf("%d\n", num);
				break;
			case 'T':
				pila.pop_back();
				break;
		}
	}
	return 0;
}