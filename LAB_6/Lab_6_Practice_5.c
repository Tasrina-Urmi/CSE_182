/*Practice-5:Write a C program to find the reverse of an array.*/
#include<stdio.h>
int main()
{
     int n ,i;
    printf("Enter size of the array :  ");
    scanf("%d",&n);
    int array[n],rev_array[n];
    printf("\nEnter elements in array: ");


    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i = 0; i < n; i++)
    {
        rev_array[i] = array[n - i - 1];
    }
    printf("\nArray in reverse order: ");
    for( i = 0 ; i < n ; i++)
    {
        printf("%d  ",rev_array[i]);
    }
    return 0;

}
