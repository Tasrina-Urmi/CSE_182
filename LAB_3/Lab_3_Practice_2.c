/*Practice-2: Write a C program to check whether a number is negative, positive or zero. */

#include<stdio.h>
int main()
{

    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);

    if(a > 0)
    {
        printf("%d is positive number",a);
    }

    else if( a < 0)
    {
        printf("%d is negative number.",a);
    }

    else
    {
        printf("Input number is zero.");
    }

    return 0;
}
