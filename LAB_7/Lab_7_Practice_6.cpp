/*Practice 6: Write a C++ program to count the frequency of each element in an array.*/

/*The frequency of an element is the number of times it occurs in an array..example:
a[3]=[4,4,2] then freq of the element : 4 occurs 2 times,2 occurs 1 times.*/


#include<iostream>
using namespace std;
int main()
{
    int size,i,j,count;
    cout<<"Enter size of array: ";
    cin>>size;

    int array[size];
    cout<<"Enter "<<size<<" elements in array: ";
    for(i = 0;i < size; i++)
    {
        cin>>array[i];

    }
    int freq[size] = {0};
    cout<<"\nFrequency of all elements of the array: "<<endl;
    for(i = 0; i < size ; i++)
    {
        count = 0;
        if(freq[i] != 1)
        {
            for(j = 0;j < size; j++)
            {
                if(array[i] == array[j])
                {
                    count++;
                    freq[j] = 1;
                }
            }
            if(count > 1 || count == 1)
            {
                cout<<array[i]<<" occurs " <<count<< " times "<<endl;
            }
        }
    }
    return 0;
}
