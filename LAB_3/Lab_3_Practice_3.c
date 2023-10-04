/*Practice-3: . Write a C program to check whether a number is divisible by 5 and 11 or not. */



#include<stdio.h>
int main()

{
    int a;
    printf("Enter an integer: ");
    scanf("%d",&a);

    if(a % 5 == 0 && a % 11 == 0)
    {
         printf("%d is divisible by 5 and 11.",a);
    }
    else
    {
         printf("%d is not divisible by 5 and 11.",a);
    }

    return 0;
}
