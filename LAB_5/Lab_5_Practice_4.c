/*Practice:4.Write a C program to check whether a number is Prime number or not. */
#include <stdio.h>
int main()
{
    int num,count = 0,i;
    printf("Enter any positive number: ");
    scanf("%d",&num);
    for( i=2 ; i < num ; i++)
    {
        if(num % i == 0)
        {
            count++;// to count how many times num is divisible by i
            break;
        }
    }
    if (count == 0)
    {

        printf("%d is a Prime number",num);
    }
    else
    {
        printf("%d is not a Prime number\n",num);
    }
    return 0;

}
