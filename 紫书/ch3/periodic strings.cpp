#include <stdio.h>
#include <string.h>
#define maxn 85

int main() {
	char s[maxn];
	int ok;
	int k;
	while(scanf("%s", s) == 1) {
		for(k = 1; k <= strlen(s); k++) {
			ok = 1;
			for(int i = k; i < strlen(s); i++) {
				if(s[i] != s[i%k]) {
					ok = 0;
					break;
				}
			} 
			if(ok)
				break;

		}
		printf("%d\n", k);
	}

	return 0;
}