/*Example-1: Write a C program that will evaluate the ratio of (a+b) to (c-d) and will print the result,if c-d is not equal to zero .The four values a,b,c and d should be taken from the output terminal.*/

#include <stdio.h>
int main()
{
    int a,b,c,d;
    float ratio;

    printf("Enter four integer values: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if (c-d != 0)
    {
        ratio = (a+b)/(c-d);
        printf("Ratio = %f\n",ratio);
    }
    return 0;
}
