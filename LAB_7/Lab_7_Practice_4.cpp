/*Practice 4: Write a C++ program to print all unique elements in the array.*/

#include <iostream>
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
    cout<<"\nUnique elements present in the array are: "<<endl;
    for(i = 0; i < size; i++)
    {
        for (j =  0; j <  i; j++)
        {
            if (array[i] == array[j])
            {

                break;
            }
        }
        if(i == j)
        {
            cout<<" "<<array[i];
        }

    }

    return 0;
}
