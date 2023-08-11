/* Practice:3.Write a C program to find LCM(Least common multiple).*/

#include <stdio.h>
int main()
{
    int i,num1,num2,min,gcd=0,lcm;
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
    lcm = num1* num2 /gcd;
    printf("LCM = %d \n",lcm);
    return 0;
}


