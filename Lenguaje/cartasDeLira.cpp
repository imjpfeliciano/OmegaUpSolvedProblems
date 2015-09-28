#include <stdio.h>
#include <algorithm>
using namespace std;

int N;
char cartas[52];
int color, blancas, negras;

int main(){
	scanf("%d", &N);
	scanf("%s", cartas);

	for(int i=0, color=0; i<N; i++, color++){
		if(color%2){
			if(cartas[i] == 'W'){
				blancas++;
			}
		} else {
			if(cartas[i] == 'B'){
				blancas++;
			}
		}
	}

	for(int i=0, color=1; i<N; i++, color++){
		if(color%2){
			if(cartas[i] == 'W'){
				negras++;
			}
		} else {
			if(cartas[i] == 'B'){
				negras++;
			}
		}
	}	


	printf("%d\n", min(blancas, negras));
	return 0;
}