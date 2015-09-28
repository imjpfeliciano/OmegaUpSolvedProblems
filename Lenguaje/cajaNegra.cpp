#include <iostream>
using namespace std;

int letras[30];
int n;
char c;

void leer_datos(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> c;
        letras[c - 'a' + 1]++;
    }
}

void imprimir_datos(){
    for(int i=1; i<=26; i++)
        cout << letras[i] << ' ';
    cout << endl;
}

void buscar_mayor(){
    n = 0;
    for(int i=1; i<=26; i++){
        if(letras[i] > n){
            n = letras[i];
            c = 'a' + i - 1;
        }
    }
    cout << c << endl;
}
int main(){
    leer_datos();
    //imprimir_datos();
    buscar_mayor();
    return 0;
}