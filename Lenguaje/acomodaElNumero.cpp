#include <stdio.h>

long long int N;
long long int tmp;
long long int ini;
long long acum;

int main(){
  scanf("%lld", &N);
  scanf("%lld", &ini);

  for(int i=1; i < N; i++){
    scanf("%lld", &tmp);
    acum += (tmp < ini);
  }
  printf("%lld", acum);
  return 0;
}