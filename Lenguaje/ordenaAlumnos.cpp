#include <stdio.h>
#include <algorithm>
using namespace std;

int n;
int alumnos[1000002];


int main() {
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &alumnos[i]);
	}
	sort(alumnos+1, alumnos+n+1);
	for(int i=n; i>=1; i--)
		printf("%d ", alumnos[i]);
	return 0;
}