
/* 
 * File:   prob1.cpp
 * Author: Andrew Nicoletti
 * Created on July 12, 2016, 08:30 PM
 * Purpose: Population
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
    int org,days;  
    float orgavg,popinc;       //Organisms, Population increase in percentage
    // Input Data
    cout<<"This program predicts a population increase assuming the factors are consistant."<<endl;
    cout<<"Enter the number of organisms of this population"<<endl;
    cin>>org;
    while(org<2){
        cout<<"Need a population of at least 2 to multiply"<<endl;
        cin>>org;
    }
    cout<<"What is the daily average population increase? (in percent)"<<endl;
    cin>>popinc;
    while(popinc<0){
        cout<<"Must enter a positive number"<<endl;
        cin>>popinc;
    }
    cout<<"How many number of days are they multiplying?"<<endl;
    cin>>days;
    while(days<1){
        cout<<"Needs to be at least 1 day"<<endl;
        cin>>days;
    }
    
    
    // Process Data
    orgavg=org;
    cout<<"Day____Population Size"<<endl;
    for (int count=1;count<=days;count++){
        cout<<count<<fixed<<setw(12)<<setprecision(2)<<orgavg<<endl;
        orgavg=orgavg+(orgavg*(popinc/100));
        
    }
    
    // Output Data
   
    
    return 0;
}

