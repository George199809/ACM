#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxn 85
int cmp(const void *a, const void *b) {
	return *(int *)a - *(int *)b;
}


int main() {
	char s1[maxn], s2[maxn];
	int num1[26], num2[26];
	int ok;

	while(scanf("%s%s", s1, s2) == 2) {
		memset(num1,0,sizeof(num1));
		memset(num2,0,sizeof(num2));

		ok = 1;
		for(int i = 0; i < strlen(s1); i++) {
			num1[s1[i]-65]++;
			num2[s2[i]-65]++;
		}
		qsort(num1,26,sizeof(int),cmp);
		qsort(num2,26,sizeof(int),cmp);
		for(int i = 0; i < 26; i++)
			if(num1[i] != num2[i]) {
				ok = 0;
				break;
			}
		if(ok)
			printf("Yes\n");
		else
			printf("No\n");

	}

	return 0;
}