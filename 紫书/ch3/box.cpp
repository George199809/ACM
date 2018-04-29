#include <stdio.h>
#include <stdlib.h>

struct rectangle {
	int w;
	int h;
};

int less(struct rectangle a, struct rectangle b) {
	if(a.w < b.w)
		return 1; 
	if(a.w > b.w)
		return 0;	//key point 不是-1
	if(a.h < b.h)
		return 1;
	if(a.h > b.h)
		return 0;
	else
		return 0;
}
void swap(struct rectangle *a, struct rectangle *b) {	//key point 要指针
	int tw, th;
	tw = b->w;
	th = b->h;
	b->w = a->w;
	b->h = a->h;
	a->w = tw;
	a->h = th;
}
void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}
int equal(struct rectangle a, struct rectangle b) {
	if(a.w == b.w && a.h == b.h)
		return 1;
	return 0;
}
int main() {
	int ok;
	int min;
	struct rectangle s[6];
	int buf[6];
	while(scanf("%d%d", &s[0].w, &s[0].h) == 2) {
		if(s[0].w > s[0].h)
			swap(&s[0].w,&s[0].h);
		ok = 1;
		for(int i = 1; i < 6; i++) {
			scanf("%d%d", &s[i].w, &s[i].h);
			if(s[i].w > s[i].h)
				swap(&s[i].w,&s[i].h);
		}
		/*
		printf("\n\n\n");
		for(int	 i = 0; i < 6; i++) {
			printf("%d %d\n", s[i].w, s[i].h);
		}
		*/
		for(int i = 0; i < 6; i++) {
			min = i;
			for(int j = i+1; j < 6; j++) {
				if(less(s[j],s[min]))
					min = j;
			}
			//printf("%d ", min);
			if(i != min) 
				swap(&s[i],&s[min]);
		}
		/*
		printf("\n\n\n");
		for(int	 i = 0; i < 6; i++) {
			printf("%d %d\n", s[i].w, s[i].h);
		}
		*/
		for(int i = 0; i < 6; i += 2) {
			if(!equal(s[i],s[i+1])) {
				ok = 0;
				break;
			}
		}
		//printf("%d\n", ok);
		buf[0] = s[0].w;
		buf[1] = s[0].h;
		if(s[2].w != buf[1])
			swap(&buf[0],&buf[1]);
		buf[2] = s[2].w;
		buf[3] = s[2].h;
		buf[4] = s[4].w;
		buf[5] = s[4].h;
		if(buf[3] != buf[4])
			swap(&buf[4],&buf[5]);
		/*printf("\n\n\n");
		for(int	 i = 0; i < 6; i++) {
			printf("%d\n", buf[i]);
		}
		*/
		for(int i = 1; i < 6; i += 2) {
			if(buf[i] != buf[(i+1)%6]) {
				ok = 0;
				break;
			}
		}
		//for(int i = 0; i < 6; i++)
		//	printf("%d ", buf[i]);
		if(ok)
			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
}
