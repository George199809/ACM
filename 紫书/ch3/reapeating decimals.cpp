#include <stdio.h>
#define maxn 3010

int n;
int mod[maxn];	//由于要输出（）和循环长度，所以必须事先储存在数组
int s[maxn];
int find(int x, int mod[]) {
	for(int i = 1; i <= n; i++)
		if(mod[i] == x)
			return i;
	return 0;
}
int main() {
	int a, b;
	int d, r;
	while(scanf("%d%d", &a, &b) == 2 && a) {
		n = 0;
		if(a >= b) {
			printf("%d.", a/b);
			a = a % b;
		}
		else {
			printf("0.");
		} 
		while(!find(10*a%b,mod) || s[find(10*a%b,mod)] != 10*a/b) {		//key point
			n++;
			a *= 10;
			d = a / b;
			r = a % b;
			s[n] = d;
			mod[n] = r;
			a = r;
		}
		int p = find(10*a%b,mod);
		for(int i = 1; i < p; i++)
			printf("%d", s[i]);
		printf("(");
		for(int i = p; i <= n; i++)
			printf("%d", s[i]);
		printf(")");
		printf("\n%d\n", n-p+1);
	}

	return 0;
}