#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int *existe;
int conjunto[2002];
int elemento;

int main() {
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &conjunto[i]);
	}
	scanf("%d", &elemento);
	if(find(conjunto, conjunto+n, elemento) != conjunto+n){
		printf("Si\n");
	} else {
		printf("No\n");
	}
	return 0;
}