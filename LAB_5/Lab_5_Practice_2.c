/* Practice:2.Write a C program to find HCF (GCD-Greatest common divisor) of two numbers.*/

#include <stdio.h>
int main()
{
    int i,num1,num2,min,gcd=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    min = (num1<num2) ? num1 : num2;
    for (i = 1; i<=min ; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            gcd = i;
        }
    }
    printf("GCD = %d \n",gcd);
    return 0;
}
