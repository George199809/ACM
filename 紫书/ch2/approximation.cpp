#include <stdio.h>
double term;
double sum = 0;

int main() {
	for(int i = 0; ; i++) {
		term = 1.0/(2*i+1);
		if(i%2)	//改变正负值
			sum -= term;
		else
			sum += term;
		if(term < 1e-6)
			break;
	}
	printf("%.6f\n", sum);
}