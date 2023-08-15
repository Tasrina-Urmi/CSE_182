/*Practice-3:Write a C program to enter length in centimeter and convert it into meter and kilometer.*/

#include <stdio.h>
int main()
{
    float cm,m,km;

    printf("Enter length in centimeter: ");
    scanf("%f",&cm);
    m = cm/100;
    km = m/1000;

    printf("%f cm =%f m\n%f cm = %f km\n",cm,m,cm,km);

}
