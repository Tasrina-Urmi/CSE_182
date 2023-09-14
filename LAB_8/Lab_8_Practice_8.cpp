/*Practice-8:Write a C++ program to find the sum of the upper triangular matrix.*/



#include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int row,col,total_row,total_col,sum = 0;

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



    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col ; col++)
        {
            if(row == col || row < col)
            {
                sum += arr[row][col];
            }
        }
    }

     cout<<"Sum of upper triangle is : "<<sum<<endl;
}
