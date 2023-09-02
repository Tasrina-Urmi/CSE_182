/*Example-3:Matrix Multiplication*/

#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],result[3][3];
    int sum = 0;

   printf("Enter elements in first matrix (A): \n");

   for(int i = 0; i < 3; i++)
   {
       for(int j = 0; j < 3; j++)
       {
           scanf("%d",&A[i][j]);
       }
   }

     printf("Enter elements in second matrix (B): \n");

     for(int i = 0; i<3 ;i++)
     {
         for(int j = 0; j < 3; j++)
         {
             scanf("%d",&B[i][j]);
         }
     }

      for (int i = 0; i < 3; i++)
    {
        for( int j = 0; j < 3; j++)
        {
             for(int k = 0; k < 3; k++)
             {
                 sum+= A[i][k] * B[k][j];
             }
             result[i][j] = sum;
             sum=0;

        }
    }
    printf("Product of matrix A * B = \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;

}
