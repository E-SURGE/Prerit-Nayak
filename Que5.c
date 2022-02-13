#include<stdio.h>
int main()
{
	float a,d,c,area;
	printf("enter the radius of the circle \n");
	scanf("%f",&a);
	printf("radius= %f \n",a);
	d=2*a;
	printf("diameter= %f \n",d);
	c=2*3.14*a;
	printf("circumference= %f \n",c);
	area=3.14*a*a;
	printf("area= %f \n",area);
	return 0;
}
