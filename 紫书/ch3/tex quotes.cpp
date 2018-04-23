#include <stdio.h>

int main() {
	int c;		//key point.
	int q = 1;
	while((c=getchar()) != EOF) {
		if(c == '"') {
			printf("%s", q?"“":"”");	//use %s to avoid multi character.
			q = !q;
		}
		else
			putchar(c);

	}

	return 0;
}