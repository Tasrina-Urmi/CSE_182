/*Practice-1:Write a C program to enter length and breadth of a rectangle and find its area and perimeter.*/

#include<stdio.h>
int main()
{
    int l , b ,area ,p;
    printf("Enter the value of length and breadth:\n");
    scanf("%d%d",&l,&b);
    area = l * b;
    p = 2*(l + b);//perimeter
    printf("Area = %d\nPerimeter = %d\n",area,p);
}
