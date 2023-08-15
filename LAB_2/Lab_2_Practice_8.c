/*Practice-8:Write a C program to check whether year is leap year or not using  conditional /ternary operator.*/

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))) ? (printf("%d is a leap year\n",year)) : (printf("%d is not a leap year\n",year));
}
