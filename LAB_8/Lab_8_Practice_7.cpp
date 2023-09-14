/*Practice-7:Write a C++ program to find the lower triangular matrix.*/


#include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int row,col,total_row,total_col, isLower;

    //input elements in matrix from user

     cout<<"Enter the number of rows = ";
    cin>>total_row;
    cout<<"Enter the number of  columns = ";
    cin>>total_col;


    cout<<"Enter the elements of the matrix: "<<endl;


    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col ; col++)
        {
            cin>>arr[row][col];
        }
    }

    //Check Lower triangular matrix condition


    isLower = 1;
    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col ; col++)
        {
           //If elements above the main diagonal (col>row)
          //is not equal to zero then it is not Lower triangular matrix

          if(col > row && arr[row][col] != 0)
          {
              isLower = 0;
          }

        }
    }

    if(isLower == 1)
    {
        cout<<"\nThe matrix is Lower Triangular matrix."<<endl;
    }
    else
    {
        cout<<"\nThe  matrix is not Lower Triangular matrix."<<endl;
    }
    return 0;
}
