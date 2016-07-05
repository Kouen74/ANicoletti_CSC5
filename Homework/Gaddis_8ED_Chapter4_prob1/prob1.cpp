
/* 
 * File:   prob1.cpp
 * Author: Andrew Nicoletti
 * Created on July 04, 2016, 01:00 PM
 * Purpose:Min/Max
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float num1,num2;
    
    // Input Data
    cout<<"Enter two numbers. This program will compare and see which is of greater value"<<endl;
    cin>>num1;
    cin>>num2;
    // Process Data
    if (num1>num2)
    
        cout<<num1<<" is greater than "<<num2;
        else if (num2>num1)
        
        cout<<num2<<" is greater than "<<num1;
        else cout<<"They are of the same value."<<endl;
        
    
    // Output Data
   
    
    return 0;
}

