# include <iostream>
    using namespace std;

    long long int n,a,p,i,j,inicio[1002],fin[1002],pde,pa,respuesta,de,aa,operacion,in,fn,aux,aux2;

    int calcula(){
        in=inicio[j];
        fn=fin[j];
        fn=(fn-in)+1;
        if(fin[j]<=pa){
            aa=fn;
            } else {
            aux=fin[j]-pa;
            aa=fn-aux;
        }
        if(inicio[j]>=pde){
            de=1;
        } else {
            aux2=pde-inicio[j];
            de=aux2+1;
        }
        if(aa==pa){
        }
        operacion=aa*(aa+1)/2;
        if(de>=2)
        operacion-=de*(de-1)/2;
        operacion=operacion%10000;
        respuesta+=operacion;
        respuesta=respuesta%10000;
        operacion=0;
    }

    int main(){
        cin>>n>>a>>p;
        for(i=1;i<=a;i++)
            cin>>inicio[i]>>fin[i];
        for(i=1;i<=p;i++){
            cin>>pde>>pa;
            respuesta=0;
            for(j=1;j<=a;j++){
                if(inicio[j]<=pa && fin[j]>=pde){
                    calcula();
                }
            }
            cout<<respuesta<<endl;
        }
        return 0;
    }