/*Practice:6.Write a c program to find sum of all prime numbers between 1 to n*/
#include <stdio.h>
int main()
{
     int num,i,j,sum=0,count;
     printf("Enter the value of n: ");
     scanf("%d",&num);
     printf("Prime numbers between 1 to %d are: ",num);

    for( i=2 ; i <= num ; i++)
    {

         count=0;
         for( j = 2; j < i; j++)
         {
             if(i % j == 0)
             {
                 count++;

             }

         }
         if (count==0)
         {
             printf (" %d ",i );
             sum=sum + i;
         }
    }
    printf("\nSum of all prime numbers between 1 to %d is %d",num,sum);
}
