/*Practice-2:Write a C program to enter radius of a circle and find its diameter ,circumference and area.*/

#include <stdio.h>
int main()
{
    int r,d;
    float c,area;
    printf("Enter the radius of a Circle: ");
    scanf("%d",&r);

    d = 2 * r;//diameter
    c=2*3.1416*r;
    area = 3.1416 * r * r;
    printf("Diameter= %d\nCircumference=%f\nArea = %f",d,c,area);
    return 0;
}
