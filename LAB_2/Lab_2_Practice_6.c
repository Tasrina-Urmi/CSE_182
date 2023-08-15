/*Practice-6:Write a C program to find maximum between three numbers using conditional /ternary operator.*/

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    ((a>b) && (a>c)) ? printf("Max = %d\n",a) : ((b>c) ? printf("Max = %d\n",b) : printf("Max = %d\n",c));
    return 0;
}
