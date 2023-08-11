/*Example-2.A program to demonstrate the use of break statement.*/
#include <stdio.h>
void main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ",i);
        if (i==6) //Loop will end when the condition becomes true.
            break;
    }
    printf("\nCame outside of loop i = %d",i);
}
