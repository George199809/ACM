#include <stdio.h>
#define maxn 25
int a[maxn];
int n, k, m, p1, p2, left;
int select(int start, int step, int direction) {
	int p;

	p = start;
	while(step--) {
		do {	//do while的好处就是，一定不会有a[p]的情况，无论前后
			p = (p+direction+n-1) % n + 1; 
		}
		while(a[p] == 0);	//key point：注意构造结构。 -1 +1 平衡。 %n约束结果
	}

	return p;
}
int main() {
	while(scanf("%d%d%d", &n, &k, &m) == 3 && n) {
		left = n;
		for(int i = 1; i <= n; i++) {
			a[i] = 1;
		}
		p1 = n; //key point 第一个也要数，所以往后站
		p2 = 1;
		while(left) {
			p1 = select(p1,k,1);
			p2 = select(p2,m,-1);
			if(p1 != p2) {
				left--;
				printf("%3d", p1);
			}
			left--;
			printf("%3d", p2);
			a[p1] = a[p2] = 0;
		}
	}

	return 0;
}