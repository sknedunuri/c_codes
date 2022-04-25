#include<stdio.h>
int main()
{
	int a=15,b=13,c=16,x,y;
	x=a-3%2+c*2/4%2+b/4;
	y= a =b+5-b+9/3;
	printf("a=%d,b=%d,c=%d,x=%d,y=%d \n",a,b,c,x,y);
	return 0;
}
