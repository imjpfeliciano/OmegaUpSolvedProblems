#include <iostream>
using namespace std;

int n;
int p;
int acum;

int main(){
  cin >> n;
  for(int i=1; i<=n; i++){
    acum = 0;
    for(int j=1; j<=5; j++){
      cin >> p;
      acum += p;
    }
    cin >> p;
    if(acum/5 != p){
      cout << i << ' ' << acum/5 << endl;
    }
  }
  return 0;
}