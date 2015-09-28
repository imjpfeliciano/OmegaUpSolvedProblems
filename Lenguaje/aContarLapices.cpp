#include <stdio.h>

int test, num;
int tmp;
int total;

int main(){
  scanf("%d %d", &test, &num);
  for(int i=1; i<=test; i++){
    scanf("%d", &tmp);
    if(tmp == num) total++;
  }
  printf("%d\n", total);
  return 0;
}