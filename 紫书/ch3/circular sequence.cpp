//核心，下标i结合取余运算实现环式循环

#include <stdio.h>
#include <string.h>
#define maxn 30

int len;
char s[maxn];
int smaller(int a, int b) {
	for(int i = 0; i < len; i++) {
		if(s[(i+a)%len] < s[(i+b)%len])
			return a;
		if(s[(i+a)%len] > s[(i+b)%len])
			return b;
	}
	return a;
}
int main() {
	int min;
	scanf("%s", s);
	//printf("3\n");
	min = 0;
	//printf("2\n");
	len = strlen(s);
	for(int i = 1; i < len; i++) {
		//printf("1\n");
		min = smaller(min,i);
	}

	for(int i = 0; i < len; i++) 
		printf("%c", s[(min+i)%len]);
	return 0;
}