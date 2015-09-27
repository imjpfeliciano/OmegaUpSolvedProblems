#include <stdio.h>

int aprobados, reprobados;
int calificacion;
int alumnos;

int main(){
  scanf("%d", &alumnos);
  for(int i=1; i<=alumnos; i++){
    scanf("%d", &calificacion);
    if(calificacion <= 5){
      reprobados++;
    } else {
      aprobados++;
    }
  }
  printf("%d %d", aprobados, reprobados);
  return 0;
}