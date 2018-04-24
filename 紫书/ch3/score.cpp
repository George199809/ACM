#include <stdio.h>
#include <string.h>
#define maxn 100

int main() {
	char s[maxn];
	int score;
	int tot;
	while(scanf("%s", s) == 1) {
		score = 0;
		tot = 1;
		for(int i = 0; i < strlen(s); i++) {
			if(s[i] == 'O') {
				score += tot;
				tot++;
			}
			else
				tot = 1;
		}
		printf("Score: %d\n", score);
	} 

	return 0;

}