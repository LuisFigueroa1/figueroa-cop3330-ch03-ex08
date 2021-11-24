//program to test if integer is odd or even

#include "std_lib_facilities.h"

int main()
{
    int value;
    cout<<"Please enter the value you want to test: "; //prompts the user
    cin >> value; //reads the value

    //loop to check if the integer is even or odd
    if(value % 2 == 0) // modulo operator if is even
    cout << "The value "<< value << " is an even number.";

    else //anything elese not even therefore odd
    cout << "The value "<< value << " is an odd number.";

    return 0;
}