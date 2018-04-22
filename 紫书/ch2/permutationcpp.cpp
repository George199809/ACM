#include <stdio.h>

int sum(int x, int y, int z) {
	int s1 = x/100 + (x/10)%10 + x%10;
	int s2 = y/100 + (y/10)%10 + y%10;
	int s3 = z/100 + (z/10)%10 + z%10;

	return s1 + s2 + s3;
}
int mult(int x, int y, int z) {
	int mult1 = (x/100) * ((x/10)%10) * (x%10);
	int mult2 = (y/100) * ((y/10)%10) * (y%10);
	int mult3 = (z/100) * ((z/10)%10) * (z%10);
	
	return mult1 * mult2 * mult3;
}

int main() {
	for(int abc = 123; abc <= 329; abc++) {
		int def = 2 * abc;
		int ghi = 3 * abc;
		if( sum(abc, def, ghi) == 45 && mult(abc, def, ghi) == 362880 )
			printf("%d %d %d\n", abc, def, ghi);
	}

	return 0;
}