/*Practice-1: Write a C++ Program to change the value of a constant integer using
pointers.*/



 #include<iostream>
 using namespace std;

 int main()
 {
    /*Const int num =14 ;cannot be changed and
    displays an error when using a pointer.*/


     int num = 14;
     int *ptr = &num;

     cout<<"Original value : "<< num << endl;

     *ptr = 76;

     cout<<"Modified value: "<< num << endl;

     return 0;

 }
