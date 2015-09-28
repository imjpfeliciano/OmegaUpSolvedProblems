#include <stdio.h>

int cal, suma;

int main() {
	// your code goes here
	for(int i=1; i<=5; i++){
		scanf("%d", &cal);
		suma+=cal;
	}
	printf("%d", suma/5);
	return 0;
}