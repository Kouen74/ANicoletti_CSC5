
/* 
 * File:   prob8.cpp
 * Author: Andrew Nicoletti
 * Created on July 03, 2016, 08:50 AM
 * Purpose: 
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float widget,pallet;
    
    // Input Data
    cout<<"How much does the pallet weigh by itself in lbs.?"<<endl;
    cin>>pallet;
    cout<<"How much does it all weigh together?"<<endl;
    cin>>widget;
    // Process Data
   
    // Output Data
    cout<<"You have about "<<(widget-pallet)/12.5<<" widgets on that pallet."<<endl;
    
    return 0;
}

