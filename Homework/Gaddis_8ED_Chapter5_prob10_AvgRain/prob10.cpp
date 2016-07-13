
/* 
 * File:   prob10.cpp
 * Author: Andrew Nicoletti
 * Created on July 12, 2016, 07:50 PM
 * Purpose: Average Rainfall
 */
 
#include <iostream>     // System Library
#include <iomanip>      // Format Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int year;
    float rain,raintot;                              //year, rain, rain total
    // Input Data
    cout<<"This program calculates the average number of rainfall per month in years."<<endl;
    cout<<"Enter the number of years of rainfall to be averaged."<<endl;
    cin>>year;
    while(year<1){
        cout<<"Need at least 1 year mate."<<endl;
        cin>>year;
    }
    
    for(int ycount=1;ycount<=(year*12);ycount++){
        cout<<"How many inches of rainfall in month "<<ycount<<"?"<<endl;
        cin>>rain;
        while(rain<0){
            cout<<"How is inches of rainfall a negative number? Water Condensation?"<<endl;
            cout<<"Try again mate."<<endl;
            cin>>rain;
        }
        raintot=raintot+rain;
    }
    // Process Data
    
    // Output Data
    cout<<"Total Months----------Total Rainfall-----Average Rainfall"<<endl;
    cout<<year*12<<setw(26)<<raintot<<setw(23)<<raintot/(year*12)<<endl;
    
    return 0;
}

