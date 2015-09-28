#include <iostream>
using namespace std;

int n;
int tmp;
int cmax;
int pmax;

int main(){
  cin >> n;
  for(int i=1; i<=n; i++){
    cin >> tmp;
    if(tmp > cmax){
      cmax = tmp;
      pmax = i;
    }
  }

  cout << pmax << ' ' << cmax << endl;
  return 0;
}