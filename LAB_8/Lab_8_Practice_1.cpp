/*Practice-1: Write a C++ program to add two matrices.*/


#include <iostream>
using namespace std;
int main()
{
    int mat1[10][10] ,mat2[10][10] , i , j , r , c , result[10][10];


    cout<<"Enter the number of rows = ";
    cin>>r;
    cout<<"Enter the number of  columns = ";
    cin>>c;

    cout<<"Enter elements of First matrix: "<<endl;

      for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ; j++)
        {
            cin>>mat1[i][j];
        }

    }

     cout<<"Enter elements of second matrix: "<<endl;

      for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ; j++)
        {
            cin>>mat2[i][j];
        }

    }

    cout<<"\nAdding the two given matrix.."<<endl;

       for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ; j++)
        {
            result[i][j]= mat1[i][j] + mat2[i][j];

        }

    }

    cout<<"Addition result of two given matrix is : "<<endl;


     for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ; j++)
        {
            cout<<result[i][j]<<" ";

        }
         cout<<endl;
    }
    return 0;

}
