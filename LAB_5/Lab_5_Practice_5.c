/*Practice:5.Write a C program to print all Prime numbers between 1 to n.*/
#include <stdio.h>
int main()
{
     int num,count,i,j;
     printf("Enter the value of n: ");
     scanf("%d",&num);
    printf("All Prime numbers between 1 to %d are: \n",num);

    for( i=1 ; i <= num ; i++)
    {

         count=0;
         for( j = 1; j <= i; j++)
         {
             if(i % j == 0)
             {
              count++;

             }


         }
         if (count == 2)// If we use i=2 and j=2 then count have to be 0,i<=num,j<i
           {
             printf("%d ",i);

           }


    }



}

