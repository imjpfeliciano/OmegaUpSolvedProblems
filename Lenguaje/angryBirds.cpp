#include <stdio.h>
#include <iostream>
using namespace std;

char c;
int acum;
int main(){
  while(scanf("%c",&c) != EOF){
    if(c == 'o'){
    	acum++;
    }
  }
  cout << acum << endl;
  return 0;
}