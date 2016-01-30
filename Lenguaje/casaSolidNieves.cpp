#include <stdio.h>
#define MAX 502
#define INF 999999

int ciudades[MAX][MAX];
int dist[MAX][MAX];
int Frecuencias[MAX];
float menor = MAX, tmp;
int Result;

int P, F, C;
int ini, fin;

int main() {
	scanf("%d %d %d", &P, &F, &C);
	for(int i=1; i<=F; i++){
		scanf("%d", &Frecuencias[i]);
	}
	
	for(int i=1; i<=P; i++){
		for(int j=1; j<i; j++){
			ciudades[i][j] = ciudades[j][i] = INF;
		}
	}
	
	for(int i=1; i<=C; i++){
		scanf("%d %d", &ini, &fin);
		scanf("%d", &ciudades[ini][fin]);
		ciudades[fin][ini] = ciudades[ini][fin];
	}
	
	for (int k = 1; k <= P; k++){
        for (int i = 1; i <= P; i++){
            // Pick all vertices as destination for the
            // above picked source
            for (int j = 1; j <= P; j++){
                // If vertex k is on the shortest path from
                // i to j, then update the value of dist[i][j]
                if (ciudades[i][k] + ciudades[k][j] < ciudades[i][j])
                    ciudades[i][j] = ciudades[i][k] + ciudades[k][j];
            }
        }
    }
    
    for(int i=1; i<=P; i++){
    	tmp = 0;
    	for(int j=1; j<=F; j++){
    		
    		tmp += ciudades[i][Frecuencias[j]];
    	}
    	tmp = tmp / (float)F;
    	//printf("%f\n", tmp);
    	if(tmp < menor){
    		menor = tmp;
    		Result = i;
    	}
    }
    
    printf("%d", Result);
   
	return 0;
}