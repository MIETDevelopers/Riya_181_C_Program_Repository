//Program to demonstrate sum of elements of an array with 10 integer elements.
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
 
    printf("Enter elements in array : ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
 
    
    for(i=0; i<10; i++)
    {
         
        sum+=a[i];
    }
     printf("sum of array is : %d",sum);
 
    return 0;
}