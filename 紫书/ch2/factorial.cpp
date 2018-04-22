#include <stdio.h>
#define MOD 1000000
int term;
int sum;
int n; 

int main() {
	while(scanf("%d", &n) == 1) {
		term = 1;
		sum = 0;
		if(n >= 25) {
			printf("000000\n");
		}
		else {
			for(int i = 1; i <= n; i++) {
				term = i * term;
				term = term % MOD;
				sum += term ;
			}
			printf("%d\n", sum%MOD);		
		}
	}
	return 0;
}
