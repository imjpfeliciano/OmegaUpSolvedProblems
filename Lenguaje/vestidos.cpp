#include <iostream>
#include <algorithm>
using namespace std;

typedef struct{
  int id;
  int gusto;
  int precio;
}vestido;

int n;
int dinero;
vestido v[35];

void leer_datos(){
  cin >> n >> dinero;
  for(int i=1; i<=n; i++){
    cin >> v[i].gusto >> v[i].precio;
    v[i].id = i;
  }
}

//FALTA ORDENAR POR PRECIO
//Ordeno por gusto hacia el vestido
bool ByGusto(vestido i, vestido j){
  return (i.gusto > j.gusto || (i.gusto == j.gusto && i.precio < j.precio) );
}

void imprimir_datos(){
  for(int i=1; i<=n; i++){
    cout << v[i].id << ' ' << v[i].gusto << ' ' << v[i].precio << endl;
  }
}

int main(){
  leer_datos();  
  sort(v+1, v+n+1, ByGusto);
  //imprimir_datos();
 
  n = 1;  
  while(v[n].precio > dinero){
    n++;
  }
  cout << v[n].id << endl;
  return 0;
}