#include <iostream>
using namespace std;

long long int GA, GB;
long long int Grupos, Personas;
long long int tmp;

long long int MCD(long long int a, long long int b){
  while(b){
    tmp = a;
    a = b;
    b = tmp % b;    
  }
  return a;
}

int main(){
  cin >> GA >> GB;
  Grupos = (GA > GB) ? MCD(GA, GB) : MCD(GB, GA);  
  Personas = (GA + GB)/Grupos;
  cout << Grupos << ' ' << Personas << endl;
  return 0;
}