#include <stdio.h>
#include <string.h>
#define maxn 100
int len;
double molar(char ch) {
    switch(ch) {
        case 'C': return  12.01;
        case 'H': return 1.008;
        case 'O': return 16.00;
        case 'N': return 14.01;
    } 
}

int is_number(char ch) {
    if(ch >= 48 && ch <= 57)
        return 1;
    return 0;

}
int is_out(int i) {
	return i >= len;
}
int main() {
    char s[maxn];
    double a, b;
    double m;
    while(scanf("%s", s) == 1) {
    	len = strlen(s);
    	m = 0;
        for(int i = 0; i < strlen(s); ) { 
        	//为了训练逻辑，特地省略		
        	if(!is_number(s[i+1]) || is_out(i+1)) {	
            	a = molar(s[i]);
            	b = 1;
            	m += a * b;
            	i += 1;
            	continue;		// key pooint.自己创建调整语句，不能忘记continuue.
            }
            if(!is_number(s[i+2]) || is_out(i+2)) {
                a = molar(s[i]);
                b = s[i+1]-48;
                m += a * b;
                i += 2;
                continue;
            }
            else {
     			a = molar(s[i]);
     			b = 10*(s[i+1]-48) + s[i+2]-48;
     			m += a * b;
     			i += 3; 
     			continue;          
            }

        }
        printf("molar mass is: %.3f\n", m);	
    }

    return 0;
}