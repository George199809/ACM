#include <stdio.h>
#include <string.h>
#define maxn 1000 + 10

int main() {
	int a[maxn];
	int n, k;
	int first;


	while(scanf("%d%d", &n, &k) == 2) {
		memset(a, 1, sizeof(a));
		first = 1;
		for(int i = 2; i <= k; i++) {
			for(int j = i; j <= n; j += i) {
				a[j] = !a[j];
			}
		}
		for(int i = 1; i <= n; i++) {
			if(a[i]) {
				if(first) {
					printf("%d", i);
					first = 0;
				}
				else		
					printf(" %d", i);	
			}
		}
		printf("\n");
	}

	return 0;
}