#include <stdio.h>
#define MAX 2000002

int divisores[MAX];
int l, h;
int acum;


int main(){
	scanf("%d %d", &l, &h);
	for(int i=1; i<=h; i++){
		for(int j=i; j<=h; j+= i){
			divisores[j]++;
		}
	}
	
	for(int i=l; i<=h; i++){
		//printf("%d tiene %d divisores\n", i, divisores[i]);
		if(i % divisores[i] == 0){
			acum++;
		}	
	}
	
	printf("%d", acum);
	return 0;
}