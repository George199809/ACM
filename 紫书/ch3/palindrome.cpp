#include <stdio.h>
#include <string.h>

#define maxn 100	
const char *ans[4] = {"is not a palindrome.", "is a regular polidrome.", "is a mirrored string.", "is a mirrored palindrome."};
//字符串常量是const char*
char reverse[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror(char ch) {
	return reverse[ch-'A'];
}

int main() {
	char s[maxn];
	while(scanf("%s", s) == 1) {
		int p, m;
		p = m = 1;
		int len = strlen(s);
		for(int i = 0; i <= len/2; i++)
			if(s[i] != s[len-1-i])
				p = 0;
		for(int i = 0; i <= len/2; i++) 
			if(s[i] != mirror(s[len-1-i]))
				m = 0;
		printf("%s -- %s\n", s,ans[p+m*2]);	
	}
}