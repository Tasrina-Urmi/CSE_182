/*Practice 1:Write a C++ program to find the maximum and minimum elements from an array.*/

#include<iostream>
using namespace std;

int main()
{
  int  i,max ,min,size;


  cout<< "Enter size of the array: ";
  cin>>size;

  int array[size];

  cout<<"\nEnter "<<size<<" elements in the array: ";
   for(i = 0; i < size; i++)
    cin >> array[i];

   //assume first element as maximum and minimum
   max = array[0];
   min = array[0];

   for(i = 1; i < size; i++)
   {
       if (array[i] > max)
       {
         max = array[i];
       }
       if(array[i] < min)
       {
           min = array[i];
       }
   }
   cout <<"\nMaximum Element is: "<<max<<endl;
   cout<<"Minimum Element is: "<<min<<endl;

   return 0;
}
