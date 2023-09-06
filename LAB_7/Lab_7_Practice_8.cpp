/*Practice 8: Write a C++ program to insert an element into an array.*/


#include <iostream>
using namespace std;
int main()
{
    int size,i,insert,position;
    cout<<"Enter size of array: ";
    cin>>size;

    int array[size];
    cout<<"Enter "<<size<<" elements in array: ";
    for(i = 0; i < size; i++)
    {
        cin>>array[i];

    }

    cout<<"Enter element to be inserted: ";
    cin >> insert;

    cout<<"Choose a position between 1 to "<<size<<" : ";
    cin>> position;


    // checking position whether valid or not
    if(position > size + 1 || position < 0)
    {
        cout<<"Invalid position! Enter valid position between 1 to "<<size<<" ";
    }
    else
    {
        for(i = size; i >= position; i--)
        {
            array[i] = array[i - 1];
        }
        array[position - 1] = insert;
        size++;

        cout<<"Array elements after insertation: ";
            for(i = 0; i < size; i++)
        {
            cout<<array[i]<<"\t";
        }
    }
    return 0;

}
