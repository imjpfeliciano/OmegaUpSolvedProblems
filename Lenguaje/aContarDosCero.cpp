#include <stdio.h>
#include <iostream>
using namespace std;

char c;
int acum;
int main(){
  while(scanf("%c",&c) != EOF){
    if(isdigit(c)){
    	acum += c - '0';
    }
  }
  cout << acum << endl;
  return 0;
}