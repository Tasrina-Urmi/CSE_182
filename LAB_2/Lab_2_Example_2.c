/*Example-2:A C program to find the maximum between two numbers using conditional operator.*/

#include <stdio.h>
void main()
{
    int a,b,max;

    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);

    max = (a > b)?(printf("Max= %d",a)) : (printf("Max = %d",b));

}
