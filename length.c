#include<stdio.h>

int length(int a[] , int size)
{
	int len;
	
	len = size/sizeof(0);
	printf("Lenght Of Array = %d\n",len);
}

void main()
{
	int a[] = {10,20,30,40,50,60,70,80,90,1,2,3};
	
	length(a,sizeof(a));
}