
/* 
 * File:   prob9.cpp
 * Author: Andrew Nicoletti
 * Created on July 03, 2016, 09:00 AM
 * Purpose: How many Calories?
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float cookie;                   //float rather than int in case someone wants to eat 'half'
    // Input Data
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookie;
    // Process Data
   
    // Output Data
    cout<<"You ate "<<cookie*100<<" calories worth of cookies"<<endl;
    
    return 0;
}

