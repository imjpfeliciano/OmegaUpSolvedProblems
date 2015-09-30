#include <stdio.h>
#include <algorithm>
using namespace std;

int n,k;
int postes[1000005];
int _min = 100000000;

int main(){
    scanf("%d %d",&k,&n);
    for(int i=0;i<n;i++){
        scanf(" %d",&postes[i]);
    }
   
    sort(postes,postes+n);
    for(int i=0;i<=(n-k);i++){
        if(_min>(postes[i+k-1]-postes[i]))
            _min=postes[i+k-1]-postes[i];
    }
    printf("%d\n",_min);
    return 0;
}