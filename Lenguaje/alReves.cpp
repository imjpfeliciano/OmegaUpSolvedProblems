#include <stdio.h>

char c;

int main(){
  while(scanf(" %c",&c) != EOF){
    if(c == '1'){
      printf("0 ");
    } else {
      printf("1 ");
    }
  }
  return 0;
}