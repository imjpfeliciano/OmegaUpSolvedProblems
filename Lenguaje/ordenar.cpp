#include <algorithm>
#include <cstdio>
using namespace std;

int arreglo[102];
int n;

int main() {
	// your code goes here
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		scanf("%d", &arreglo[i]);
		
	sort(arreglo+1, arreglo+n+1);
	
	for(int i=1; i<=n; i++)
		printf("%d ", arreglo[i]);
	return 0;
}