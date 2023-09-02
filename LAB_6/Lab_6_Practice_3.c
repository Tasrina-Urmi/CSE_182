/*Practice-3:Write a C program to count the total number of even and odd elements in an array.*/
#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter elements in array:\n");

    for( int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for( int i = 0; i < n; i++)
    {
        if(array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total even elements: %d\n",even);
    printf("Total odd elements: %d\n",odd);

}
