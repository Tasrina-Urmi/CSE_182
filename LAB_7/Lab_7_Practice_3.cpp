/*Practice 3: Write a C++ program to count the total number of even and odd elements in an array.*/

#include <iostream>
using namespace std;
int main()
{
    int size,even=0,odd = 0;
    cout<<"Enter size of the elements: " ;
    cin>>size;

    int array[size];
    cout<<"\nEnter "<<size<<" elements in the array: ";
    for(int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }

    for(int i = 0; i < size ; i++)
    {
        if(array[i] % 2 ==0)
        {
             even++;
        }
        else
        {
            odd++;
        }


    }

    cout<<"\nTotal Number of even numbers: "<<even;
    cout<<"\nTotal Number of odd numbers: "<<odd<<endl;

    return 0;

}
