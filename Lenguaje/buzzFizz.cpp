#include <iostream>
using namespace std;

int ini, fin;

int main(){
  cin >> ini >> fin;
  
  for(int i=ini; i<=fin; i++){
    if(i%3 == 0){
      if(i%5 == 0){
        cout << "BuzzFizz" << endl;
      } else {
        cout << "Buzz" << endl;
      }
    } else {
      if(i%5 == 0){
        cout << "Fizz" << endl;
      } else {
        cout << i << endl;
      }
    }
  }
  return 0;
}