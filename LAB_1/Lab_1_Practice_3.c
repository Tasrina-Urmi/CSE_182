//3.Write a C program to calculate the area and perimeter of a triangle.
#include <stdio.h>
#include <math.h>
main()
{
    int a, b, c, perimeter;
    float s, area;
    printf("Enter the three sides of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    perimeter=a + b + c;
    s=(a+b+c) / 2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Perimeter=%d\nArea=%f",perimeter,area);
}
