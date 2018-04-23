#include <stdio.h>
#include <string.h>
int min(int a, int b) {
	return a>b ? b: a;
}
int main() {
	int n;
	int ans[20], input[20];
	int buf1[10], buf2[10];
	int A, B;
	int kase = 1;
	while(scanf("%d", &n) && n) {
		memset(ans,0,sizeof(ans));
		memset(buf1,0,sizeof(buf1));
		for(int i = 0; i < n; i++) {
			scanf("%d", &ans[i]);
			buf1[ans[i]]++;
		} 
		printf("Game %d:\n", kase++);
		while(1) {
			memset(input,0,sizeof(input));
			memset(buf2,0,sizeof(buf2));
			A = B = 0;
			for(int i = 0; i < n; i++) {
				scanf("%d", &input[i]);
				if(input[i] == ans[i])
					A++;
				buf2[input[i]]++;
			}
			if(!input[0]) break;
			for(int i = 1; i <= 9; i++) {
				B += min(buf1[i],buf2[i]);
			}
			B -= A; // key point. 集合的思想处理动作
			printf("	(%d,%d)\n", A, B);
		}
	}

	return 0;
}