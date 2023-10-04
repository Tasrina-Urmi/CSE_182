/*Practice-6:  Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.*/



#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%d%d%d", &a , &b , &c);

    if(a == b && b == c)
    {
        printf("The triangle is equilateral.");
    }
    else if(a == b || b == c || c == a)
    {
        printf("Thr triangle is isosceles.");
    }
    else
    {
        printf("The triangle is scalene.");
    }

    return 0;
}
