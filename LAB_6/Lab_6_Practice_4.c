/*Practice-4:Write a C program to copy all elements from an array to another array.*/
#include<stdio.h>
int main()
{
    int n ,i;
    printf("Enter size of the array :  ");
    scanf("%d",&n);
    int array[n],copy_array[n];
    printf("\nEnter elements in array: ");


    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    //copying all the elements from array1.
    for(i = 0; i < n; i++)
    {
        copy_array[i] = array[i];
    }
    printf("\nCopying elements from an array to another array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",copy_array[i]);
    }
    return 0;

}
