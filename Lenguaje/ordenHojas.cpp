#include <stdio.h>
#define MAX 1000009

int n;
int hojas[MAX];
int next = 1;
int pos_actual;

typedef struct{
    int val;
    int izq;
    int der;
}Nodo;

Nodo arbol[MAX];

void meter(int nuevo){
    while(true){
        if(nuevo < arbol[pos_actual].val){
            if(arbol[pos_actual].izq == -1){
                arbol[next].val = nuevo;
                arbol[next].izq = arbol[next].der = -1;
                arbol[pos_actual].izq = next;
                next++;
                return;
            } else {
                pos_actual = arbol[pos_actual].izq;
            }
        } else {
            if(arbol[pos_actual].der == -1){
                arbol[next].val = nuevo;
                arbol[next].izq = arbol[next].der = -1;
                arbol[pos_actual].der = next;
                next++;
                return;
            } else {
                pos_actual = arbol[pos_actual].der;
            }
        }
    }
}

void DFS(int nodo_actual){
    printf("%d ", arbol[nodo_actual].val);
    if(arbol[nodo_actual].izq != -1){
        DFS(arbol[nodo_actual].izq);
    }
    if(arbol[nodo_actual].der != -1){
        DFS(arbol[nodo_actual].der);   
    }
}

int main(){
  scanf("%d",&n);
  
  for(int i=0; i<n; i++){
    scanf("%d",&hojas[i]);
  }

  //Asignamos la raiz
  arbol[0].val = hojas[n-1];
  arbol[0].izq = -1;
  arbol[0].der = -1;

  for(int i=n-2; i>=0; i--){
    pos_actual = 0;
    //printf("%d ", hojas[i]);
    meter(hojas[i]);
  }  

  pos_actual = 0;
  DFS(pos_actual);
  
  printf("\n");
  //for(int i=0; i<n; i++){
    //printf("Nodo Actual %d\n", arbol[i].val);
    //printf("Izq %d\n", arbol[i].izq);
    //printf("Der %d\n", arbol[i].der);
    //printf("\n");

  //}
  return 0;
}