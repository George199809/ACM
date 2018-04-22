#include <stdio.h>

int main() {
	int a, b, c;

	while(scanf("%d%d%d", &a, &b, &c) == 3 && b) {
		printf("%d.", a/b);
		a = a%b;
		c = c - 1;
		while(c--) {
			a *= 10;
			printf("%d", a/b);
			a = a%b;
		}
		a *= 10;
		if(a/b >= 5)
			printf("%d\n", a/b+1);
		else
			printf("%d\n", a/b);
		printf("\n");
	}

	return 0;
}