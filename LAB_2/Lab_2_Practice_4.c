/*Practice-4:Write a C program to enter temperature in Celsius and convert it into fahrenheit.*/

#include <stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&celsius);
    fahrenheit = ((celsius*9)/5) + 32;
    printf("%f Celsius = %f Fahrenheit",celsius,fahrenheit);
}
