/*Practice 5: Write a C++ program to count the total number of duplicate elements in an array.*/


#include<iostream>
using namespace std;
int main()
{
     int size,i,j,count;
    cout<<"Enter size of the array: ";
    cin>>size;

    int array[size];
    cout<<"\nEnter "<<size<<" elements in the array: ";
    for(i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < i ; j++)
        {
            if(array[i] == array[j])
            {
                 count++;
                 break;
            }
        }

    }
     cout<<"\nTotal number of duplicate elements found in array are: "<<count;
    return 0;
}
