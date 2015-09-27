#include <stdio.h>
#include <algorithm>
using namespace std;

int pollos[20002], bolsa, n;
int k;

int main() {
	scanf("%d %d", &n, &bolsa);
	for(int i=1; i<=n; i++){
		scanf("%d", &pollos[i]);
	}
	sort(pollos+1, pollos+n+1);
	int pos=1;
	for(int i=1; i<n; i++){
		for(int j=i+1; j<=n; j++){
			if(pollos[i] + pollos[j] <= bolsa){
				k++;
			} else {
				break;
			}
		}
	}
	printf("%d", k);
	return 0;
}