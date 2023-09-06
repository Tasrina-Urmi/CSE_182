 /*Practice 2: Write a C++ program to find the second largest element in an array.*/

 #include<iostream>
 using namespace std;
 int main()
 {
     int size, large,slarge,i; //slarge = second large
     cout<<"Enter size of the elements: " ;
     cin>>size;

     int array[size];
     cout<<"\nEnter "<<size<<" elements in the array: ";
     for(i = 0; i < size ; i++)
     {
         cin>>array[i];
     }

     large = array[0];
     for(i = 0; i < size; i++)
     {
        if( array[i] > large)
        {
            large = array[i];
        }
     }

     slarge = array[0];
     for(i = 0; i < size; i++)
     {
        if(array[i] > slarge)
        {
            if(array[i] != large)
                slarge = array[i];
        }
     }

     cout<<"\nSecond Largest Element : "<<slarge<<endl;

     return 0;


 }
