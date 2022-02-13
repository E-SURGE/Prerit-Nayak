#include <stdio.h>
int main()
{
int a,b;
printf("please enter the first number \n");
scanf("%d",&a);
printf("please enter the second number \n");
scanf("%d",&b);
if(a>b)
{
	printf("maximum is = %d",a);
}
else
{
	printf("maximum is = %d",b);
}
return 0;
}
