#include <stdio.h>

int N, M;
int res = 1;

int main(){
	scanf("%d %d", &N, &M);	
 if(M <= N)
{
 printf("0");
return 0;
}
	for(int i=N; i>0; i--){
		res = (res%M) * (i%M);
		res%=M;
	}
	printf("%d", res%M);
	return 0;
}