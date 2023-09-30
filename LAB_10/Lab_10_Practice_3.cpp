/*Practice-3: Write a C++ program to sort arrays using pointers and functions.*/



#include<iostream>
using namespace std;

// Function to sort the array

void sortarray(int *arr , int size)
{
    for(int i = 0; i < size - 1 ; ++i)
    {
        for(int j = 0 ; j < size - i - 1; ++j)
        {
            if(*(arr + j) > *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Input the size of array: ";
    cin >> n;

    int arr[n];
    cout<<"Enter the elements : ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sortarray(arr , n);

    cout<<"Sorted array: ";
    for(int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";

    }
    return 0;
}



/*It is also correct because the array itself is a pointer.*/

/*void sortarray(int arr[] , int size)
{
    for(int i = 0; i < size - 1 ; ++i)
    {
        for(int j = 0; j < size - i - 1; ++j)
        {
            if(arr[j] . arr[j + 1])
            {
                int temp= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
} */
