#include <stdio.h>
#include <string.h>
char header[8][1<<8];

int readchar() {
	int ch;

	do {
		ch = getchar();
	}
	while(ch == '\n' || ch == '\r');
	
	return ch;
}

int readint(int c) {
	int sum;

	sum = 0;
	while(c--) {
		sum *= 2;
		sum += readchar()-48;
	}

	return sum;
}

int readcodes() {
	int ch;

	memset(header,0,sizeof(header));  //key point. have to initial the array.
	ch = readchar();
	if(ch == EOF)
		return  0;
	header[1][0] = ch;
	for(int i = 2; i < 8; i++) {
		for(int j = 0; j < (1<<i)-1; j++) {		//注意00，非二进制
			ch = getchar();
			if(ch == EOF)
				return 0;
			if(ch == '\n' || ch == '\r')
				return 1;
			header[i][j] = ch;
		}
	}

	return 1;
}

int main() {
	while(readcodes()) {
		for(;;) {
			int v, len;

			len = readint(3);
			if(len == 0) 
				break;
			for(;;) {
				v = readint(len);
				if(v == (1<<len)-1)
					break;
				printf("%c", header[len][v]);
			}
		}
		printf("\n");
	}

	return 0;
}
