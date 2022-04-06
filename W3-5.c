#include <stdio.h>
void bigg(int a[],int *N);

int main()
{
    int a[10],i,N,p;
    printf("Enter the total number of elements in the array:\n");
    scanf("%d",&N);
    printf("Enter the elements in the array one by one:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    bigg(a,&N);    
}

void bigg(int a[],int *N)
{
    int i,max;
    
    max = a[0];
    
    for(i=0;i<*N;i++)
    {
        if( a[i] > max)
        {
            max = a[i];
        }
    }
    printf("The biggest element in the given array is: %d",max);    
}