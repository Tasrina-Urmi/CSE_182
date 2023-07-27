//write a c program to count number of digits in any number.
#include <stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        num/=10;
        count++;
    }
    printf("Digit=%d",count);
    return 0;
}
