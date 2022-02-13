#include <stdio.h>
int main()
{
    int a,b;
    printf("please enter a number to check if it is odd or even \n");
	scanf("%d",&a);	
	switch(a%2)
	{
		case 0:
	
			printf( "%d is an even number",a);
			break;
			
		case 1:
		
        	printf("%d is an odd number",a);
			break; 	
		
	}
	return 0;
	
}
