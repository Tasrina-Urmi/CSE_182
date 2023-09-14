/*Practice-3: Write a C++ program to perform Scalar matrix multiplication.*/


/*
The term scalar multiplication refers to the product of a real number and a matrix.
In scalar multiplication, each entry in the matrix is multiplied by the given scalar.*/


#include<iostream>
using namespace std;
int main()
{
      int a[10][10] , n , i , j , r , c , result[10][10];


    cout<<"Enter the number of rows = ";
    cin>>r;
    cout<<"Enter the number of  columns = ";
    cin>>c;

    cout<<"Enter elements of the matrix: "<<endl;

      for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter a number to multiply with the matrix: ";
    cin>>n;

    cout<<"Scalar Matrix Multiplication: "<<endl;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ; j++)
        {
            result[i][j]= n * a[i][j];

        }

    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ; j++)
        {
            cout<< result[i][j] <<" ";

        }
        cout<<endl;

    }
    return 0;

}
