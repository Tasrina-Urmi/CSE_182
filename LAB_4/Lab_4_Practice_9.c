//Write a C program to enter any number and print all factors of the number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Factors are: ");
    for (int i=1; i<=num; i++)
    {
        if (num % i ==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
