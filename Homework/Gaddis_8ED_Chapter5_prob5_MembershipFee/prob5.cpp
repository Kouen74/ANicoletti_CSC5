
/* 
 * File:   prob5.cpp
 * Author: Andrew Nicoletti
 * Created on July 12, 2016, 05:00 PM
 * Purpose: Membership Fees Increase
 */
 
#include <iostream>     // System Library
#include <string>       // Ain't no strings on me
#include <iomanip>      // Formatting Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float memfee;
    memfee=2500.00f;
    string s,p;         // singular and plural of the word year
    s="year";
    p="years";
    // Input Data
    
    // Process Data
    cout<<"Membership fee for a country club is at $2,500 per year (who has that kind of money?)"<<endl;
    cout<<"The club is increase it's fee by 4% each year for the next six years."<<endl;
    for(int count=1;count<=6;count++){
        memfee=memfee*1.04f;
        if (count<2){
        cout<<"In "<<count<<" "<<s<<", "<<"the annual membership will increase to $"<<
                fixed<<setprecision(2)<<memfee<<endl;
        
        }else
        cout<<"In "<<count<<" "<<p<<", "<<"the annual membership will increase to $"<<memfee<<endl;
    }
    // Output Data
   
    
    return 0;
}

