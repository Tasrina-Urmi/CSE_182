/*Example-2: Write a C program to check whether a given integer number is Even or Odd.*/

#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d",&number);

    if (number % 2 == 0)
    {
        printf("%d is an even integer.\n",number);
    }
    else
    {
        printf("%d is an odd integer.\n",number);
    }
    return 0;
}
