//Write a C program to find sum of all natural numbers between 1 to n.
#include <stdio.h>
int main()
{
    int num,count,sum=0;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    for (count=1; count<=num; ++count)
    {
        sum+=count;
    }
    printf("The sum of all natural numbers between 1 to %d=%d",num,sum);
    return 0;
}
