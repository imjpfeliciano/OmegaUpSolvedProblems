#include <iostream>
    using namespace std;

int negras,cuentas,i,j,cont_n,collar[300002],desperdicio,minimo;

void quita_negra(){
    i++;
    while(collar[i] != 0){
        desperdicio--;
        i++;
    }
}

void siguiente_negra(){
    j++;
    if(j>cuentas)
        j=1;
    while(collar[j] != 0){
        desperdicio++;
        j++;
        if(j>cuentas)
            j = 1;
    }
}

void calcula_minimo(){
    while(i<=cuentas){
        quita_negra();
        siguiente_negra();
        if(desperdicio < minimo)
            minimo = desperdicio;
    }
}

void encuentra_negras(){
    i = 1;
    /*nos paramos en la primera negra*/
    while(collar[i] != 0)
        i++;
    j=i;
    cont_n = 1;
    while(cont_n < negras){
        siguiente_negra();
        cont_n++;
    }
    minimo =  desperdicio;
}

int main(){
    cin >> negras >> cuentas;

    for(i=1;i<=cuentas;i++)
        cin >> collar[i];

    encuentra_negras();
    calcula_minimo();
    cout << minimo << endl;
    return 0;
}