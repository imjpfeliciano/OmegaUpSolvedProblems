#include <stdio.h>
#include <math.h>

long long int N;
bool cuadrado, rectangulo;
long long int raiz;

int main(){
	scanf("%lld", &N);
	raiz = sqrt(N);

	for(int i=2; i<=raiz; i++){
		if(!(N % i)){
			//printf("%d\n", i);
			if(i * i == N){
				cuadrado = true;
			} else {
				rectangulo = true;
			}  
		}
	}

	if(cuadrado && rectangulo){
		printf("ambos\n");
		return 0;
	}

	if(cuadrado){
		printf("cuadrado\n");
	}

	if(rectangulo){
		printf("rectangulo\n");
	}

	if(!cuadrado && !rectangulo){
		printf("ninguno\n");
	}
	
	return 0;
}