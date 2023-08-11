/*Practice:13.Write a C program to create Simple Calculator using switch case.*/


#include <stdio.h>
int main()
{
    char operator;
    float num1 , num2;

    printf("Enter the value for two operands: ");
    scanf("%f%f",&num1 ,&num2);
    printf("Enter an arithmetic operator(+,-,*,/) : ");
    scanf("%*c%c",&operator);

    switch (operator)
    {
    case '+':
        printf("The result of %.2f + %.2f = %.2f\n",num1,num2,num1+num2);
        break;
    case '-':
        printf("The result of %.2f - %.2f = %.2f\n",num1,num2,num1-num2);
        break;
    case '*':
        printf("The result of %.2f * %.2f = %.2f\n",num1,num2,num1*num2);
        break;
    case '/':
        if(num2 != 0)
        printf("The result of %.2f / %.2f = %.2f\n",num1,num2,num1/num2);
        else
            printf("Number can't be divided by 0\n");
        break;
    default:
        printf("Invalid operator\n");
    }
    return 0;
}
