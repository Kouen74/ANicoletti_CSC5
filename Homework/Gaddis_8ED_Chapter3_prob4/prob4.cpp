
/* 
 * File:   prob4.cpp
 * Author: Andrew Nicoletti
 * Created on July 03, 2016, 07:40 AM
 * Purpose: Average Rainfall
 */
 
#include <iostream>     // System Library
#include <iomanip>
#include <string>
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    string month1,month2,month3;
    float rain1,rain2,rain3,totalAv;
    // Input Data
    cout<<"Name of the first month:"<<endl;
    cin>>month1;
    cin.ignore();               //skips new line character
    cout<<"How much rain in inches for that month?"<<endl;
    cin>>rain1;
    cout<<"Name of the second month:"<<endl;
    cin>>month2;
    cin.ignore();
    cout<<"How much rain in inches for that month?"<<endl;
    cin>>rain2;
    cout<<"Name of the third month:"<<endl;
    cin>>month3;
    cin.ignore();
    cout<<"How much rain in inches for that month?"<<endl;
    cin>>rain3;
    
    // Process Data
   totalAv=(rain1+rain2+rain3)/3;
    // Output Data
   cout<<"The average amount of rain for "<<month1<<','<<month2<<" and "<<month3<<"is"<<endl;
   cout<<fixed<<setprecision(2)<<totalAv<<" inches of rain"<<endl;
    
    return 0;
}

