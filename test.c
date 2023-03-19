#include<stdio.h>
#include<stdlib.h>
void swap(int a,int b)
{
	int tem;
	a=tem;
	tem=b;
	b=tem;
}
int main()
{
	printf("a:%d b:%d",swap(1,2));
 return 0；
}
