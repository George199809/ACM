#include <stdio.h>
#include <string.h>
#define maxn 10

int main() {
	int tot, x, y, n;
	int a[maxn][maxn];
	memset(a,0,sizeof(a));
	scanf("%d", &n);

	tot = 1;
	x = 0;
	y = n-1;
	a[x][y] = 1;
	while(tot < n*n) {
		while(x+1<n && a[x+1][y]==0) { x++; tot++; a[x][y] = tot; }
		while(y-1>-1 && a[x][y-1]==0) { y--; tot++; a[x][y] = tot; }
		while(x-1>-1 && a[x-1][y]==0) { x--; tot++; a[x][y] = tot; }
		while(y+1<n && a[x][y+1]==0) { y++; tot++; a[x][y] = tot; } 
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}