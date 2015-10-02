#include <stdio.h>

int M, T, U, F, D;
int total = 0;
int pasos = 0;
int actual;
char c;

int main(){
	scanf("%d %d %d %d %d", &M, &T, &U, &F, &D);
	for(int i=1; i<=T; i++){
		scanf(" %c", &c);
		if(c == 'U' || c == 'D'){
			total += U + D;
		}
		if(c == 'F'){
			total += F + F;
		}
		
		if(total >= M){
			printf("%d", i - 1);
			break;
		}
	}
}