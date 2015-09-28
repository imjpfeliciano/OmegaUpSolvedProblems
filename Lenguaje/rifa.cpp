#include <iostream>
using namespace std;

long long int cantidad;
long long int val; 
long long int n;

long long int sumatoria(long long int s){
  return (s * (s+1)/2);
}

int main(){
  cin >> n;
  for(int i=1; i<=n; i++){
    cin >> val;
    cantidad += sumatoria(val);
  }
  cout << cantidad << endl;
  return 0;
}