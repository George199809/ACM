#include <stdio.h>

char s[5][5] = { {'R','R','G','S','J'},
				 {'X','D','O','K','I'},
				 {'M',' ','V','L','N'},
				 {'W','P','A','B','E'},
				 {'U','Q','H','C','F'} };
int x = 2;
int y = 1;
void swap(char *a, char *b) {
	char ch = *b;
	*b = *a;
	*a = ch;
}
int legal(char ch) {
	switch(ch) {
		case 'A': return x>0 ? 1 : 0;
		case 'B': return x<4 ? 1 : 0;
		case 'L': return y>0 ? 1 : 0;
		case 'R': return y<4 ? 1 : 0;
	}
}
int main() {
	char choice;
	while(scanf("%c", &choice) == 1 && choice != '0') {
		if(!legal(choice)) {
			printf("This puzzle no final configuration.\n");
			break;
		}
		switch(choice) {
			case 'A': { swap(&s[x][y],&s[x-1][y]); x--; break; }
			case 'B': { swap(&s[x][y],&s[x+1][y]); x++; break; }
			case 'L': { swap(&s[x][y],&s[x][y-1]); y--; break; }
			case 'R': { swap(&s[x][y],&s[x][y+1]); y++; break; }
		}
	}
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++)
			printf("%c ", s[i][j]);
		printf("\n");
	}

	return 0;
}