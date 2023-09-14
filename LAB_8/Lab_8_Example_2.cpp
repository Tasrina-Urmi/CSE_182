/*Example 2: A C++ Program to find the upper triangular matrix.*/

/*Upper Triangular matrix::A special square matrix whose all elements below the main diagonal are zero*/


#include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int row,col,total_row,total_col, isUpper;

    //input elements in matrix from user

    cout<<"Enter the rows and columns : ";
    cin>>total_row>>total_col;

    cout<<"The Matrix : "<<endl;


    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col ; col++)
        {
            cin>>arr[row][col];
        }
    }

    //Check Upper triangular matrix conditon


    isUpper = 1;
    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col ; col++)
        {
           //If elements below the main diagonal (col<row)
          //is not equal to zero then it is not upper triangular matrix

          if(col < row && arr[row][col] != 0)
          {
              isUpper = 0;
          }

        }
    }

    if(isUpper == 1)
    {
        cout<<"\nThe matrix is Upper Triangular matrix."<<endl;
    }
    else
    {
        cout<<"\nThe  matrix is not Upper Triangular matrix."<<endl;
    }
    return 0;
}
