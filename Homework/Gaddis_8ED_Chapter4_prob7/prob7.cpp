
/* 
 * File:   prob7.cpp
 * Author: Andrew Nicoletti
 * Created on July 04, 2016, 02:10 PM
 * Purpose: Time Calculator
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int day,hour,minute,second;
    
    // Input Data
    cout<<"This program converts seconds into minutes, hours and or days."<<endl;
    cout<<"Input the number of seconds you wish to convert."<<endl;
    cin>>second;
    // Process Data
    day=second/86400;
    hour=second/3600;
    minute=second/60;
    // Output Data
    if ((second>59)&&(second<3600))
        cout<<minute<<"minutes "<<second%60<<" seconds."<<endl;
    if ((second>3599)&&(second<86400))
        cout<<hour<<" hours "<<(second%3600)/60<<" minutes "<<(second%3600)%60<<" seconds."<<endl;
    if (second>86399)
        cout<<day<<" days "<<(second%86400)/3600<<" hours "<<(second%86400%3600)/60<<" minutes "<<second%86400%3600%60<<" seconds."<<endl;
    cout<<second<<" seconds"<<endl;
    return 0;
}

