/*Practice-4:  Write a C++ program to find the reverse of an array using the function.*/


#include<iostream>
using namespace std;

void reverseArray(int arr[] ,int size)
{
    /*int temp;
    for(int i = 0; i < size/2 ; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i -1] = temp;
    }*/

    int start = 0;
    int end = size - 1;

    while (start < end)
        //swap elements at start and end
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] =temp;

        start++;
        end--;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter "<< n <<" elements of the array : ";
    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    reverseArray(arr , n);

    cout<<"Reverse array: ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
