#include <stdio.h>
#include <vector>
using namespace std;

vector<int> fibo;
int N;

int main() {
	fibo.push_back(1);
	fibo.push_back(1);
	
	scanf("%d", &N);
	for(int i=2; i<=N; i++){
		fibo.push_back( (fibo[i-1] + fibo[i-2]) % 1000000 );
	}
	
	printf("%d", fibo[N]);
	return 0;
}