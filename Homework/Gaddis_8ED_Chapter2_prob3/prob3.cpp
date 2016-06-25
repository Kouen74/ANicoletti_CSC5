
/* 
 * File:   prob3.cpp
 * Author: Andrew Nicoletti
 * Created on June 22, 2016, 1:50 AM
 * Purpose: sales tax
 */
 
#include <iostream>     // System Library
#include <iomanip>
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float sales, statetax, countytax;   // establishing the variables
    
    // Input Data
    sales = 95.00f;                     // assigning values to the variables
    statetax = 0.04f;
    countytax = 0.02f;
    // Process Data
   
    // Output Data
    cout<<setprecision(4)<<"The total sales on a $"<<sales<<" purchase is"<<endl;
    cout<<"$"<<(statetax+countytax)*sales<<endl;
    
    return 0;
}

