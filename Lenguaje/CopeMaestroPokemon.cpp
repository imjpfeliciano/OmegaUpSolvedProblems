#include <iostream>
using namespace std;

bool pokemons[800];
int pkmn1, pkmn2;
int nv_pokemon;
int n;

void calculaFibonaccis(){
  pokemons[1] = true;
  pokemons[2] = true;
  pkmn1 = 1;
  pkmn2 = 2;
  
  while(nv_pokemon < 750){
    nv_pokemon = pkmn1 + pkmn2;
    if(nv_pokemon < 750){
      pokemons[nv_pokemon] = true;
      pkmn1 = pkmn2;
      pkmn2 = nv_pokemon;
    }      
  }
}

int main(){
  calculaFibonaccis();
  
  cin >> n;
  for(int i=1; i<=n; i++){
    cin >> nv_pokemon;
    if(pokemons[nv_pokemon])
      cout << nv_pokemon << ' ';
  }
  cout << endl;
  
  return 0;
}