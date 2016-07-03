
/* 
 * File:   prob10.cpp
 * Author: Andrew Nicoletti
 * Created on July 03, 2016, 09:10 AM
 * Purpose: How much insurance?
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
    float thing; 
    // Input Data
    cout<<"Yo dawg, how much would that building cost if it needs to be rebuilt?"<<endl;
    cin>>thing;
    // Process Data
   
    // Output Data
    cout<<"Yo dawg, I think you should ensure at least $"<<fixed<<setprecision(2)<<
    thing*.8<<" of that building homie."<<endl;
    
    return 0;
}

