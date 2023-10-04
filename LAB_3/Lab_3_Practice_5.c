/*Practice-5: Write a C program to input all sides of a triangle and check whether triangle is valid or not..*/




#include<stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter three sides of a triangle: ");
    scanf("%d%d%d",&a ,&b , &c);

    if((a + b) > c && (b + c) > a  && (a + c) > b)
    {
        printf("The triangle is valid.");
    }
    else
    {
         printf("The triangle is not valid.");
    }

    return 0;
}
