/*Practice:7.Write a C Program to enter any number and print its prime factor.*/
#include <stdio.h>
int main()
{
    int n,i,j,count;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Prime factors: ");

    for ( i = 2; i <= n; i++)// 1 to n (input) loop.

    {


       if(n % i == 0)//checking whether factor or not.
        //while( n % i == 0) --If we use while loop then output -for 36_2,2,3,3



        {

            count = 0;
            for( j = 2; j < i; j++)//checking whether that (i) factor is prime or not.
            {
                if(i % j == 0)
                {
                    count++;

                }
            }
            if(count == 0)
            {

                printf("%d \t",i);
               //n=n/i;(for while loop)


            }
        }
    }

    return 0;

}
