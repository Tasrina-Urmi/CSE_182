/*Practice-6:Write a C++ program to find the sum of the minor diagonal elements of a matrix.*/


#include<iostream>
using namespace std;
int main()
{

    int row,col,total_row,total_col,arr[10][10];


    cout<<"Enter the number of rows = ";
    cin>>total_row;
    cout<<"Enter the number of  columns = ";
    cin>>total_col;

    cout<<"Enter elements of the matrix: "<<endl;

    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col ; col++)
        {
            cin>>arr[row][col];
        }


    }



   // int sum_major = 0;
    int sum_minor = 0;

    for(row = 0; row < total_row; row++)
    {
        for(col = 0; col < total_col ; col++)
        {
           /* if(col == row)
            {
                sum_major += arr[row][col];
            }*/
            if((row + col) == total_row -1)
            {
                sum_minor += arr[row][col];
            }
        }
    }

    //cout<<"\nThe sum of major diagonal elements: "<<sum_major <<endl;
    cout<<"\nThe sum of minor diagonal elements: "<<sum_minor <<endl;

    return 0;

}
