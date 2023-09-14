/*Practice-5: Write a C++ program to find the sum of the main diagonal elements of a
matrix.*/


#include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int row,col,total_row,total_col,sum = 0;

    //input elements in matrix from user

    cout<<"Enter the rows and columns : ";
    cin>>total_row>>total_col;

    cout<<"Enter the matrix elements : "<<endl;


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
            if(col == row)
            {
                sum = sum + arr[row][col];
            }
        }
    }

    cout<<"Sum of the main diagonal elements of the matrix : " <<sum<< endl;

    return 0;



}
