#include <stdio.h>

int velocidad;
int ac[1000002];
int mini = 2000000;

int main(){
    int duracion;
    int n;
    int suma;
    scanf("%d%d",&velocidad,&duracion);
    velocidad++;
    scanf("%d",&n);
    int ini = 1, fin = 1;
    for(int i = 1; i <= n; i++){
        int v, d;
        scanf("%d%d",&v,&d);
        v++;
        ac[i] = d*velocidad/v;
    }
    int cont = 0;
    suma = ac[1];
    mini = n+1;
    while(ini <= n){
        if(suma >= duracion){
            cont = fin-ini+1;
            if(cont < mini){
                mini = cont;
            }
            ini++;
            suma -= ac[ini-1];
        }else{
            fin++;
            if(fin > n){
                fin = n+1;
                ini++;
            }
            suma += ac[fin];
        }
    }
    printf("%d\n",mini);
    return 0;
}