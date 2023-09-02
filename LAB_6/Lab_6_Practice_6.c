/*Practice-6:Write a C Program to find the sum of n numbers using array.*/

#include<stdio.h>
int main()
{
    int n , sum = 0, i;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements in the array: ",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);

    }
    for(i = 0 ; i < n; i++)
    {
        sum =  sum + array[i];
    }
    printf("Sum of all elements of array = %d",sum);
    return 0;
}
