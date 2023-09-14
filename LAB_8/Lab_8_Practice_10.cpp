/*Practice-10:Write a C++ program to check whether a matrix is an identity matrix or not.*/


/*The program takes a array and checks if it is an identity matrix.
An identity matrix is a square matrix with main diagonal elements as 1 and rest 0.*/


#include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int row,col,total_row,total_col,identity;

    //input elements in matrix from user

    cout<<"Enter the number of rows = ";
    cin>>total_row;
    cout<<"Enter the number of  columns = ";
    cin>>total_col;


    if(total_row != total_col)
    {
        cout<<"Matrix is not a square matrix.. "<<endl;
        exit(0);
    }


    cout<<"Enter the elements of the matrix: "<<endl;


    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col ; col++)
        {
            cin>>arr[row][col];
        }
    }

    identity = 1;

    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col ; col++)
        {
            if(row == col && arr[row][col] != 1)
            {
                identity = 0;
            }
        }
    }

    if(identity == 1)
    {
        cout<<"\nThe given matrix is an identity matrix."<<endl;
    }
    else
    {
        cout<<"\nThe given matrix is not an identity matrix."<<endl;
    }

    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col ; col++)
        {
             cout<<arr[row][col] <<" ";
        }
        cout<<"\n";
    }


    return 0;

}

