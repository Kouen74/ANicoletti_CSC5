
/* 
 * File:   prob7.cpp
 * Author: Andrew Nicoletti
 * Created on July 12, 2016, 6:50 PM
 * Purpose: Pennies for pay (sounds familiar)
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
    float pennies=1,days;  
    // Input Data
    cout<<"How many days have you worked for pennies that multiply exponentially?"<<endl;
    cin>>days;
     cout<<"Days         US Dollars"<<endl;
     cout<<"-----------------------"<<endl;
    // Process Data
    while(days<=0){
        cout<<"Please enter a positive number."<<endl;
        cin>>days;
    }    
     for(int count=1;count<=days;count++){
        
        cout<<count<<"               $"<<fixed<<setprecision(2)<<(pennies)/100<<endl;
        pennies*=2;
    }
    // Output Data
   
    
    return 0;
}

