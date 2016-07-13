
/* 
 * File:   prob2.cpp
 * Author: Andrew Nicoletti
 * Created on July 12, 2016, 04:00 PM
 * Purpose: Characters for the ASCII Codes
 */
 
#include <iostream>     // System Library
#include <iomanip>      // Formatting Library
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    
    
    // Input Data
    cout<<"This program displays the ASCII codes from 1 - 127."<<endl;
    
    for (int count=1;count<=127;count++){
        if(count%16==0){
            cout<<endl;}
      cout<<static_cast<char>(count);
    }
   
    // Process Data
    
    // Output Data
   
    
    return 0;
}

