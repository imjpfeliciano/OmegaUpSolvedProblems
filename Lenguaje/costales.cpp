#include <stdio.h>
#define MAX 30002

int nnaranjas;
int naranjas[MAX];
int val;
int ncostales;
int costales[MAX];

int main(){
	scanf("%d", &nnaranjas);
	for(int i=1; i<=nnaranjas; i++){
		scanf("%d", &val);
		naranjas[val] = 1;
	}

	scanf("%d", &ncostales);
	for(int i=1; i<=ncostales; i++){
		scanf("%d", &val);
		costales[val] = 1;
	}

	val = 0;
	for(int i=1; i<MAX; i++){
		if(naranjas[i] && !costales[i]){
			val++;
		}
	}

	printf("%d", val);
	return 0;
}