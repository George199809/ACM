#include <stdio.h>

long long int C(int n, int m) {
	long long int ans;

	ans = 1;
	if(m > n-m)
		m = n - m;
	for(int i = n-m+1; i <= n; i++) 
		ans *= i;
	for(int i = 1; i <= m; i++)
		ans /= i;

	return ans;
}

int main() {
	printf("%lld\n", C(25,12));

	return 0;
}