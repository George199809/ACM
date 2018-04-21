#include <stdio.h>

int main(){
	int n, m;
	while(scanf("%d%d", &n, &m) == 2){
		int x, y;

		x = (4*n-m)/2; // x must be an integer.
		y = n - x;
		if(m%2 == 1 || x<0 || y<0)
			printf("No answer\n");
		else
			printf("%d %d\n", x, y);
	}

	return 0;
}