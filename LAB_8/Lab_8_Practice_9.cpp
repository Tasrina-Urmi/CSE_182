/*Practice-9:Write a C++ program to check whether a matrix is sparse or not.*/


/*A matrix is a two-dimensional data object having m rows and n columns, therefore a total of m*n values. If most of the values of a matrix are 0 then
 we say that the matrix is sparse.
Consider a definition of Sparse where a matrix is considered sparse if the number of
 0s is more than half of the elements in the matrix,*/


 #include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int row,col,total_row,total_col,n,count = 0;

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

    n = total_row*total_col;

    for(row = 0; row < total_row ; row++)
    {
        for(col = 0; col < total_col ;col++)
        {
            if(arr[row][col] == 0)
            {
                count += 1;
            }
        }
    }

    if(count > n/2)
    {
        cout<<"\nThis matrix is a sparse matrix."<<endl;

    }
    else
    {
        cout<<"\nThis matrix is not a sparse matrix."<<endl;
    }

    return 0;
}
