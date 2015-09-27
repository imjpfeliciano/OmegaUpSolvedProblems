#include <iostream>
#include <vector>
using namespace std;

vector<char> numero;
bool acarreo;
int tmp_1;
int n;

void imprimir_numero(){
  for(int i=numero.size()-1; i>=0; i--)
    cout << numero[i];
}

void multiplicar(int pos){
  if(pos < numero.size()){
    //Obtenemos el valor del elemento
    tmp_1 = numero[pos] - '0';
    //Multiplicamos por 2
    tmp_1 = tmp_1 << 1;
    //Verificamos si habia un acarreo
    if(acarreo){
      tmp_1++;
      acarreo = false;
    }
    if(tmp_1 > 9){
      acarreo = true;
    }
    //Regresamos el digito a la cadena
    numero[pos] = (tmp_1 % 10)+'0';
    //nos movemos al siguiente digito de la multiplicacion
    multiplicar(pos+1);            
  } else {
    //Si es el ultimo elemento y aun habia acarreo
    if(acarreo)
      numero.push_back('1');
  }
}

int main(){
  //numero.push_back('2');
  numero.push_back('1');
  cin >> n;
  //if(n==0){
  //  cout << 1;
  //} else {
    for(int i=1; i<=n; i++){
      acarreo = false;
      multiplicar(0);
    }
    imprimir_numero();
  //}
  cout << endl;
  return 0;
}