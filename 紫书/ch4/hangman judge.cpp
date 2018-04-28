#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 65
int main() {
	int n, left, wrong;
	char ans[maxn];
	char guess[maxn];
	int num[26];
	while(scanf("%d", &n) && n != -1) {
		left = 0;
		wrong = 0;
		memset(num,0,sizeof(num));
		printf("Round %d\n",n);
		scanf("%s", ans);
		for(int i = 0; i < strlen(ans); i++) {
			if(!num[ans[i]-97]) {
				num[ans[i]-97] = 1;
				left++;
			}
		}
		scanf("%s", guess);
		for(int i = 0; i < strlen(guess); i++) {
			if(num[guess[i]-97]) {
				num[guess[i]-97] = 0;
				left--;
			}
			else 
				wrong++;
		}
		if(wrong > 6)
			printf("You lose.\n");
		else
		if(left)
			printf("You Chickened out.\n");
		else
			printf("You win.\n");
	}

	return 0;
}