#include <stdio.h>

int main() {
	int s[] = {1,2,3,5};
	//对于int数组，不能使用strlen，只能这么求长度。
	//但strlen()，适用于头指针。
	int len = sizeof(s)/sizeof(s[0]);
	printf("%d\n", len);

	return 0;
}