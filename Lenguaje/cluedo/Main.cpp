#include "cluedo.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int C, U, A;
bool caso_resuelto;
int teorias_realizadas;
int teorias_permitidas;

int Teoria(int c, int u, int a) {
  if (teorias_realizadas++ >=
      teorias_permitidas) return 0;
  
  int errors[3], e = 0;
  if (c != C) errors[e++] = 1;
  if (u != U) errors[e++] = 2;
  if (a != A) errors[e++] = 3;
  if (e) return errors[rand() % e];
  caso_resuelto = true; return 0;
}

int main(){
  scanf("%d", &teorias_permitidas);
  fclose(stdin);
  
  srand(time(NULL));
  for (C = 1; C <= 6; ++C) {
    for (U = 1; U <= 10; ++U) {
      for (A = 1; A <= 6; ++A) {
        caso_resuelto = false;
        teorias_realizadas = 0;
        ResolverCaso();
        if (!caso_resuelto) {
          puts("0.0");
          exit(0);
        }
      }
    }
  }
  puts("1.0");
  return 0;
}