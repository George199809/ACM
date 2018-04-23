#include <stdio.h>
#include <string.h>
#define maxn 100

int main() {
	int a, b, c, ok;
	char buf[maxn];
	char s[maxn];
	scanf("%s", s);
	int kase = 1;
	for(int abc = 111; abc <= 999; abc++) {
		for(int de = 11; de <= 99; de++) {
			a = abc * (de%10);
			b = abc * (de/10);
			c = a + (b*10);
			sprintf(buf, "%d%d%d%d%d", abc, de, a, b, c); 		//key point.在数组中处理数据
			ok  = 1;
			for(int i = 0; i < strlen(buf) && ok; i++) {
				if(strchr(s,buf[i]) == NULL) ok = 0;
			}
			if(ok) {
				printf("<%d>\n"
						"%5d\n"
						"X%4d\n"
						"-----\n"
						"%5d\n"
						"%4d\n"
						"-----\n"
						"%5d\n", kase++, abc, de, a, b, c);
			} 
		}
	}
}