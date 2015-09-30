#include <iostream>
  using namespace std;

int tablero[1002][1002],tam,vueltas,tmp;
char clave[1002][1002],resultante[1002][1002];

void buscarX(){
  int i,j;
  for(i=1;i<=tam;i++)
    for(j=1;j<=tam;j++)
      if(resultante[i][j] == 'X')
        cout << tablero[i][j] << ' ';
  cout << endl;
}

void mediaVuelta(){
  int x=1,y,i,j;
  for(i=tam;i>=1;i--,x++){
    y=1;
    for(j=tam;j>=1;j--,y++){
      resultante[x][y] = clave[i][j];
    }
  }
}

void girarAntiHorario(){
  int x=1,y,i,j;
  for(i=tam;i>=1;i--,x++){
    y=1;
    for(j=1;j<=tam;j++,y++){
      resultante[x][y] = clave[i][j];
    }
  }
}

void girarHorario(){
  int i,j,x=1,y;
  for(i=tam;i>=1;i--,x++){
    y=1;
    for(j=tam;j>=1;j--,y++){
      resultante[x][y] = clave[j][i];
    }
  }  
}

int main(){
  int i,j;
  cin >> tam;
  
  for(i=1;i<=tam;i++)
    for(j=1;j<=tam;j++)
      cin >> tablero[i][j];
  
  for(i=1;i<=tam;i++)
    for(j=1;j<=tam;j++)
      cin >> clave[i][j];
  
  cin >> vueltas;
  tmp = vueltas%4;
  if(!tmp){
    for(i=1;i<=tam;i++)
      for(j=1;j<=tam;j++)
        resultante[i][j] = clave[i][j];
  } else {
    if(tmp==3){
      girarAntiHorario();
    } else {
      if(tmp == 2){
        mediaVuelta();
      } else {
        girarHorario();
      }
    }
  }
  buscarX();
  return 0;
}