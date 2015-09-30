#include <iostream>
    using namespace std;

char digitos_ini[202], digitos_fin[202];
int n, contador,i,num1,num2,res;

void leer_digitos(){
    for(i=1;i<=n;i++)
        cin >> digitos_ini[i];
    for(i=1;i<=n;i++)
        cin >> digitos_fin[i];
}

void convertir(){
    for(i=1;i<=n;i++){
        num1 = digitos_ini[i]-49;
        num2 = digitos_fin[i]-49;
        /*buscamos el numero mayor luego le restamos el menor*/
        if(num1 > num2)
            res = num1 - num2;
        else
            res = num2 - num1;
        /*si el resultado es menor o igual a 5 es el valor mas pequeño
          sino a 10(numero de digitos) le quitamos el valor que nos dio
          y con eso aseguramos el valor mas pequeño*/
        if(res <= 5)
            contador+= res;
        else
            contador+=(10-res);
    }
}

int main(){
    cin >> n;
    leer_digitos();
    convertir();
    cout << contador << endl;
    return 0;
}