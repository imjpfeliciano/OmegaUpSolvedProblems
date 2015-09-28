#include <stdio.h>

int val, tmp;
int n;
bool bandera;
int main() {
	scanf("%d", &n);
	for(int i=1; i<=5; i++){
		scanf("%d", &val);
		if(val >= tmp){
			tmp = val;
		} else {
			bandera = true;
		}
	}
	printf("%s", (bandera)? "NO" : "SI");
	return 0;
}