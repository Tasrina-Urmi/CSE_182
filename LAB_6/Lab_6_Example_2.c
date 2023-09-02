/*Example-2:A C program for array traversing.*/
#include<stdio.h>
int main()
{
  int array[5], i;

  printf("Enter 5 integers:\n");//taking input and storing it in an array.
  for(i = 0; i < 5; ++i)
    {
        scanf("%d",&array[i]);
    }
    printf("Displaying integers:\n");//printing element of an array.
    for(i = 0; i < 5; ++i)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
