#include <stdio.h>

int f_1, f_2;
int tmp;
int N;

int main(){
	f_1 = f_2 = 1;
	scanf("%d", &N);
	
	while(true){
		for(int i=f_1 + 1; i < f_2; i++){
			if(i < N)
				printf("%d ", i);
			else break;
		}
		tmp = f_2;
		f_2 = f_1 + f_2;
		f_1 = tmp;
		if(f_1 >= N) break;
	}
	return 0;
}