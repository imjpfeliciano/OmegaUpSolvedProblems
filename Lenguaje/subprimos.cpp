#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

bool criba[100002];
vector<int> primos;
int A, B;
int acum;

void criba_eratostenes(int N){
	int raizN = (int)sqrt((double)N);
	criba[1] = true;
	for(int i=2; i<=raizN; i++){
		if(!criba[i]){
			primos.push_back(i);
			for(int j=i*i; j<=N; j+=i){
				criba[j] = true;
			}
		}
	}
	for(int i=raizN + 1; i<= N; i++){
		if(!criba[i]){
			primos.push_back(i);
		}
	}
}

bool descomponer_primos(int num){
	int pos = 0;
	int factores = 0;
	int val = num;
	while(val != 1){
		while(!(val % primos[pos])){
			val /= primos[pos];
			factores++;
		}
		pos++;
	}
	return !criba[factores];
}

int main(){
	scanf("%d %d", &A, &B);
	criba_eratostenes(B);
	for(int i=A; i<=B; i++){
		acum += descomponer_primos(i);	
	}
	printf("%d\n", acum);
	return 0;
}