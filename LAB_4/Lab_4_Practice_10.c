//Write a c program to enter any number and calculate its factorial.
#include <stdio.h>
int main()
{
    int num, fact=1;
    printf("Enter any number: ");
    scanf("%d",&num);

    for (int i = num; i>0; i--)
    {
        fact *= i;
    }
    printf("%d! = %d",num,fact);
    return 0;
}
