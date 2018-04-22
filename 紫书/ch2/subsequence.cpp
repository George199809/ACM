#include <stdio.h>

int main() {
	int kase = 1;
	int n, m;
	while(scanf("%d%d", &n,&m) == 2 && m) {
		double sum = 0;
		for(int i = n; i <= m; i++) {
			sum += 1.0/i/i; 	//key point.
		}
		printf("Case %d: %.5f\n", kase++, sum);
	}

	return 0;
}