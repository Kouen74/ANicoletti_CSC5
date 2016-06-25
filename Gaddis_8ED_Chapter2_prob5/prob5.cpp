
/* 
 * File:   prob5.cpp
 * Author: Andrew Nicoletti
 * Created on June 23, 2016, 5:20 PM
 * Purpose: Average of Values
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int num1,num2,num3,num4,num5,sum;   //5 variables and the sum
    
    // Input Data
    num1=28;
    num2=32;
    num3=37;
    num4=24;
    num5=33;
    // Process Data
    sum=num1+num2+num3+num4+num5;
    // Output Data
    cout<<"The sum of all the numbers is "<<sum<<endl;
    cout<<"The average of all the numbers is "<<sum/5<<endl;
    
    return 0;
}

