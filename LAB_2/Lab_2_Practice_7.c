/*Practice-7:Write a C program to check whether a number is even or odd using conditional/ternary operator.*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a integer: ");
    scanf("%d",&a);

    (a%2 == 0) ? (printf("The number is Even")) : (printf("The number is Odd"));

}
