/*Practice-2:Write a C program to print all negative elements in an array.*/
#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter size of the array: ");
   scanf("%d",&n);
   int array[n];
   printf("Enter elements in array: \n");

   for(i =0; i < n; i++)
   {
       scanf("%d",&array[i]);
   }

   printf("\nAll negative elements in array are: ");
   for(i = 0; i < n; i++)
   {
       if(array[i] < 0)
       {
           printf("%d\t", array[i]);
       }
   }
   return 0;

}
