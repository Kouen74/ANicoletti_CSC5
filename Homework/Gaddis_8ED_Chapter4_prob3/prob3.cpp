
/* 
 * File:   prob3.cpp
 * Author: Andrew Nicoletti
 * Created on July 04, 2016, 01:40 PM
 * Purpose: Magic Dates
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int day,month,year;
    
    // Input Data
    cout<<"Enter the month."<<endl;
    cin>>month;
    cout<<"Enter the day."<<endl;
    cin>>day;
    cout<<"Enter the year."<<endl;
    cin>>year;
    // Process Data
    if (day*month==year)
        cout<<"The date is magic!"<<endl;
    else cout<<"The date is not magic..."<<endl;
    // Output Data
   
    
    return 0;
}

