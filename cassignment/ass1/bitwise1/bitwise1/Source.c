#include<stdio.h>
int main()
{
	int val = 0xFECA,r,l,h,g;
	r = val << 8;
	l = val >> 8;
	h = r | l;
	//g = h & 0xFFFF;
	printf("%x", h);
	getch();
	return 0;
}