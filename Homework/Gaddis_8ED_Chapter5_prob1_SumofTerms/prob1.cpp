
/* 
 * File:   prob1.cpp
 * Author: Andrew Nicoletti
 * Created on July 10, 2016, 07:40 PM
 * Purpose: Sum of Numbers
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    int sum,num,countprev,total;
    
    // Input Data
    cout<<"Enter a positive interger."<<endl;
    cin>>sum;
    
    // Process Data
    while(sum<=0){
        cout<<"Please enter a positive number other than 0."<<endl;
        cin>>sum;
    }
    
    for(int count=1;count<=sum;count++){
        countprev=count-1;
        total=(count*(count+1))/2;
        cout<<count<<" + "<<total-count<<" = "<<total<<endl;
        
    }
    
    //  Output Data
    cout<<"The sum of the numbers from 0 - "<<sum<<" is "<<(sum*(sum+1))/2<<endl;
    
    return 0;
}

