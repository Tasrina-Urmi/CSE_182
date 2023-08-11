/*Example-3.A C program to demonstrate the use of continue statement.*/
#include <stdio.h>
void main()
{
    int i, n = 20;
    for (i = 1; i <= n; ++i)
    {
        if (i % 5 ==0){
            printf("pass\n");
            continue; /* this continue the execution of loop if i%5==0.*/
        }
        printf("%d\n",i);
    }
}
