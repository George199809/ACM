#include <stdio.h>
int n;
int count;

int main() {
	while(scanf("%d", &n) == 1) {
		count = 0;
		while(n>1) {
			if(n%2) {
				n = (3*n+1)/2;
				count += 2;
			}
			else {
				n /= 2;
				count++;
			}
		}
		printf("%d\n", count);
	}
}