#include <stdio.h>

int a;


int main() {
	scanf("%d", &a);
	(a%2) ? printf("impar\n") : printf("par\n");
	return 0;
}