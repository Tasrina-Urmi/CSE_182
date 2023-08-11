 /*Practice:8.Write a C program to check whether a number is strong number or not.*/
 #include <stdio.h>
 int main()
 {
     int n,sum=0,rem,temp,fact;//temp=temporary variable.
     printf("Enter a number: ");
     scanf("%d",&n);
     temp = n;//Copy the value of num to a temporary variable.
     while (temp > 0)// while(temp != 0)
     {
         rem = temp % 10;
         fact = 1;
         for(int i = 1; i <= rem; i++)
         {
             fact = fact * i;
         }
         sum = sum + fact;
         temp = temp / 10;
     }
     if(sum == n)
       {
         printf("%d is a Strong number",n);
       }
     else
       {
         printf("%d is not a Strong number",n);

       }


 }
