#include <stdio.h>
#include <string.h>
#define maxr 10
#define maxc 10


int main() {
	char s[maxr][maxc];
	char number[maxr][maxc];
	int r, c;
	int tot;
	int kase;
	int first;

	kase = 1;
	while(scanf("%d%d", &r, &c) == 2 && r) {
		getchar();		//key point.因为后面要读char，所以滤过空格
		printf("puzzle #%d:\n", kase++);
		for(int i = 0; i < r; i++) 
			for(int j = 0; j < c; j++) {
				scanf("%c", &s[i][j]);
				getchar();
			} 
				
		tot = 1;
		//printf("!!!\n");
		memset(number,0,sizeof(number));
		for(int i = 0; i < r; i++) {
			for(int j = 0; j < c; j++) {
				if(s[r][c] != '*' && (i==0 || j==0 || s[i-1][j]=='*' || s[i][j-1]=='*')) {
					number[i][j] = tot;
					tot++;
				}
			}
		}

		first = 1;
		printf("Across");
		for(int i = 0; i < r; i++) {
			for(int j = 0; j < c; j++) {
				if(s[i][j] == '*') {
					first = 1;
					continue;
				}
				if(first) {
					printf("\n\t%d.",number[i][j]);
					first = 0;
				}
				if(j == c-1) {
					first = 1;
				}
				printf("%c", s[i][j]);
			}
		}
		printf("\n");	

		first = 1;
		printf("Down");
		for(int j = 0; j < c; j++) {
			for(int i = 0; i < r; i++) {
				if(s[i][j] == '*') {
					first = 1;
					continue;
				}
				if(first) {
					printf("\n\t%d.", number[i][j]);
					first = 0;
				}
				if(i == r-1) 
					first = 1;
				printf("%c", s[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
