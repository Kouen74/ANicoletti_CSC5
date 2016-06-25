
/* 
 * File:   prob6.cpp
 * Author: Andrew Nicoletti
 * Created on June 23, 2016, 5:40 PM
 * Purpose: Annual Pay
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int payAmnt,anPay,payPrds;   //The problem calls to initialize the value of 
                                // 2200.0, I felt this was unnecessary to add a 
                                // decimal point to show a zero, so they are all
                                // intergers to save some memory space.
    
    // Input Data
    payAmnt=2200;
    payPrds=26;
    anPay=payAmnt*payPrds;
    // Process Data
   
    // Output Data
    cout<<"Every two weeks, an employee gets paid $"<<payAmnt<<endl;
    cout<<"Annually, the employee gets paid $"<<anPay<<endl;
    
    return 0;
}

