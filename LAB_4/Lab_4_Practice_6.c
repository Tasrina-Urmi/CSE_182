//Write a C program to find first and last digit of any number.
#include <stdio.h>
 int main()
 {
     int num,num1;
     printf("Enter a number: ");
     scanf("%d",&num);
     num1=num % 10;
     while (num / 10 != 0)
     {
         num /=10;
     }
     printf("First Digit: %d\nLast Digit: %d",num,num1);
     return 0;
 }
