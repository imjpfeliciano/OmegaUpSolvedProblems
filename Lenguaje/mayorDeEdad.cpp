#include <stdio.h>

int n;

int main(){
  scanf("%d", &n);
  if(n < 18){
    printf("Es Menor");
  } else {
    printf("Es Mayor");
  }
  return 0;
}