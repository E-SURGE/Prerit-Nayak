#include <stdio.h>
int main()
{
	float a,b,s,d,m,div;
	int c;
	printf("\n enter a number \n");
	scanf("%f",&a);
	printf("enter another number \n");
	scanf("%f",&b);
	printf("\n for addition press 0 \n for substraction press 1 \n for multiplication press 2 \n for division press 3 \n");
	scanf("%d",&c);
	switch(c)
	{
		case 0:
			s=a+b;
			printf("answer = %f",s);
			break;
	    case 1:
		    d=a-b;
			printf("answer = %f",d);
			break;
	    case 2:
			 m=a*b;
			printf("answer = %f",m);
				break;
		case 3:
			div=a/b;
			printf("answer = %f",div);
				break;
			
	}
}