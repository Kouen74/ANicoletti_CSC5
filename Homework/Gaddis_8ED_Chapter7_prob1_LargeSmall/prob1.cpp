
/* 
 * File:   prob1.cpp
 * Author: Andrew Nicoletti
 * Created on July 26, 2016, 03:10 AM
 * Purpose: Largest/Smallest Array Values
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    const int SIZE=10;
    int numbers[SIZE],high,low;
    // Input Data
    cout<<"Alright bucko, we are going to find out which of the next 10 numbers"<<endl;
    cout<<"You enter are the highest and lowest."<<endl;
    cout<<"Enter a one or two digit number, then press enter. Do that 10 times."<<endl;
    for(int count=0;count<SIZE;count++){
        cout<<"Enter number for "<<count+1<<endl;
        cin>>numbers[count];
    }
    // Process Data
    high=numbers[0];
    for(int index=1;index<SIZE;index++){
        if(numbers[index]>high)
            high=numbers[index];
    }
    
    low=numbers[0];
    for(int lowdex=1;lowdex<SIZE;lowdex++){
        if(numbers[lowdex]<low)
            low=numbers[lowdex];
    }
        
    // Output Data
    cout<<"The highest number you entered was "<<high<<endl;
    cout<<"The lowest number you entered was "<<low<<endl;
    
    return 0;
}

