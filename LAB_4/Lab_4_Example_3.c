//Write a C program to add numbers until the user enters zero using do while loop.
#include <stdio.h>
int main()
{
    int number,sum=0;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        sum +=number;
    } while (number !=0);
    printf("Sum=%d",sum);
    return 0;
}
