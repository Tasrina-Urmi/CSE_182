/*Practice-4:Write a C++ program to check whether two matrices are equal or not.*/





#include<iostream>
using namespace std;
int main()
{
    int A[10][10] ,B[10][10] , i , j , r , c , isEqual;


    cout<<"Enter the number of rows = ";
    cin>>r;
    cout<<"Enter the number of  columns = ";
    cin>>c;

    cout<<"Enter elements of First matrix: "<<endl;

      for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ; j++)
        {
            cin>>A[i][j];
        }

    }

     cout<<"Enter elements of second matrix: "<<endl;

      for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ; j++)
        {
            cin>>B[i][j];
        }

    }


    isEqual = 1;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ; j++)
        {
            if(A[i][j] != B[i][j])
            {
                isEqual =0;
                break;
            }
        }

    }
    /*Checks the value of isEqual
      As per our assumption if isEqual contains 1 means both are equal
      If it contains 0 means both are not equal.*/

      if(isEqual ==1)
      {
          cout<<"\nMatrix A is equal to Matrix B.";

      }
      else
      {
           cout<<"\nMatrix A is not equal to Matrix B.";
      }
      return 0;

}


