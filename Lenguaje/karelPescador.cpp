#include <cstdio>
using namespace std;

int n;
long long int tablero[2002][2002];
long long int cmax;
long long int v, h;

int main(){
  scanf("%d", &n);;
  
  //Lectura de datos
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      
      scanf("%lld" ,&tablero[i][j]);
      
      
      //Horizontal
      h = tablero[i][j] + tablero[i][j-1];
      //Vertical
      v = tablero[i][j] + tablero[i-1][j];
      if( v > cmax || h > cmax){
        cmax = (v > h) ? v : h;
      }
    }
  }

  printf("%lld\n", cmax);
  return 0;
}