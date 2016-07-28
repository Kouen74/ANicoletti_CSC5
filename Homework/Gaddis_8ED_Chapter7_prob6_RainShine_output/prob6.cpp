
/* 
 * File:   prob6.cpp
 * Author: Andrew Nicoletti
 * Created on July 27, 2016, 11:00 PM
 * Purpose: Rain or Shine
 */
 
#include <iostream>     // System Library
#include <fstream>      // Writing a file
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    const int MONTH=3,DAY=30;
    char weather[MONTH][DAY];
    
    // Input Data
    for(int count=0;count<MONTH;count++){
        for(int loop=0;loop<DAY;loop++){
            cout<<"Input the weather data for month "<<count+1<<" and day "<<loop+1<<endl;
            cout<<"(as 'R','C',or 'S')"<<endl;
            cin>>weather[count][loop];
        }
    }
    // Process Data
    ofstream outputFile;
    outputFile.open("RainOrShine.txt");
    // Storing Data into file
    for(int count=0;count<MONTH;count++){
        for(int loop=0;loop<DAY;loop++){
            outputFile<<weather[count][loop]<<endl;
        }
    }
    
    // Output Data
    outputFile.close();
    
    return 0;
}

