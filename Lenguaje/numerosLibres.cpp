#include <stdio.h>
#include <algorithm>
using namespace std;

int casos;
long long int a, b;
int main(){
	scanf("%d", &casos);{
		for(int i=1; i<=casos; i++){
			scanf("%lld %lld", &a, &b);
			if(__gcd(a, b) == 1){
				printf("SI\n");
			} else {
				printf("NO\n");
			}
		}
	}
	return 0;
}