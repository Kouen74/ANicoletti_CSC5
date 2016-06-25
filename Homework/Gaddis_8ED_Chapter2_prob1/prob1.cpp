
/* 
 * File:   prob1.cpp
 * Author: Andrew Nicoletti
 * Created on June 22, 2016, 1:30 AM
 * Purpose: Sum of two numbers
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {

  // The homework asks to store 2 integers in variables and have a 
    // store the sum of 2 variables in a variable.
    // Declare Variables
    int num1,num2,total;
    
    // Input Data
    num1 = 50;
    num2 = 100;
    // Process Data
    total= num1+num2;
    // Output Data
    cout<<"The total of the two integers is "<<total<<"."<<endl;
    
    return 0;
}

