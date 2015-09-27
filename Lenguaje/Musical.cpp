#include <iostream>
  using namespace std;
  
int tiempo[100002],notas,preguntas,i,c_notas,pos,j,nota_actual = 1;

int main(){
  cin >> notas >> preguntas;
  
  for(i=1;i<=notas;i++){
    cin >> c_notas;
    for(j=1;j<=c_notas;j++,pos++){
      tiempo[pos] = nota_actual;
    }
    nota_actual++;
  }
  
  for(i=1;i<=preguntas;i++){
    cin >> pos;
    cout << tiempo[pos] << endl;
  }
  
  return 0;
}