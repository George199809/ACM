#include <stdio.h>
#include <string.h>
int main() {
	int s[10];
	int n;
	int a;
	while(scanf("%d", &n) == 1){
		memset(s,0,sizeof(s));
		for(int i =  1; i <= n; i++) {
			a = i;
			while(a > 0) {
				s[a%10]++;
				a /= 10;
			}
		}
		for(int i = 0; i < 10; i++) {
			printf("%d\t", s[i]);
		}

	}
	return 0;
}