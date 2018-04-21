/*在0-9999中找到一个形如xxyy的完全平方数*/

#include <stdio.h>
#include <math.h>

/*int main() {
	for(int x = 1; x < 10; x++) {
		for(int y = 0; y < 10; y++) {
			int n = 1100*x + 11*y;
			int m = floor(sqrt(n)+0.5);
			if(m*m == n)
				printf("%d\n", n);

		}
	}
	return 0;
}*/

int main() {
	for(int x = 10; ;x++) {
		int n = x*x;
		if(n > 9999) break;
		int hi = n/100;
		int lo = n%100;
		if(hi/10==hi%10 && lo/10==lo%10)
			printf("%d\n", n);
	}

	return 0;
}