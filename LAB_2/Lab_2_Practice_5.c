/*Practice-5:Write a C program to convert days into years,months,weeks and days.*/

#include <stdio.h>
int main()
{
    int days ,week, month, year;
    printf("Enter number of Days: ");
    scanf("%d",&days);
    year = days / 365;
    days = days % 365;// remainder refers to the number of days remaining after calculating the year.
    month = days / 30;
    days = days % 30;
    week = days / 7;
    days = days % 7;

    printf("%d Year %d Month %d Week and %d Day\n",year,month,week,days);
}
