#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b=");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("new value of a and b=%d%d",a,b);
	return 0;
	
}
