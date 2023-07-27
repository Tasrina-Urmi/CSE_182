//Write a c program to enter any number and print its reverse.
#include <stdio.h>
int main()
{
    int num,r_num=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    while (num != 0)
    {
        r_num= (r_num*10) + (num%10);
        num /= 10;
    }
    printf("Reverse: %d",r_num);
    return 0;
}
