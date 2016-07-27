
/* 
 * File:   prob2.cpp
 * Author: Andrew Nicoletti
 * Created on July 27, 2016, 03:00 PM
 * Purpose: Rainfall Statistics
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
    const int MONTHS=12;
    float rain[MONTHS],raintot,rainavg,rainhigh,rainlow;
    // Input Data
    cout<<"Enter the total rainfall for the 12 months starting on the first."<<endl;
    for (int count=0;count<12;count++){
        cout<<"Enter the rain for month "<<count+1<<endl;
        cin>>rain[count];
        while(rain[count]<0){
            cout<<"Please enter a positive number"<<endl;
            cin>>rain[count];
        }
    }
    // Process Data
    rainhigh=rain[0];
            for(int rhigh=1;rhigh<MONTHS;rhigh++){
                if(rain[rhigh]>rainhigh){
                    rainhigh=rain[rhigh];
                }
            }
    rainlow=rain[0];
            for(int rlow=1;rlow<MONTHS;rlow++){
                if(rain[rlow]<rainlow){
                    rainlow=rain[rlow];
                }
            }
    
    raintot=0;
    for(int rainadd=0;rainadd<MONTHS;rainadd++){
        raintot+=rain[rainadd];
    }
    
    rainavg=0;
    for(int avg=0;avg<MONTHS;avg++){
        rainavg+=rain[avg];
    }
    rainavg/=MONTHS;
    // Output Data
    cout<<"The highest number of rainfall in the year is    "<<rainhigh<<endl;
    cout<<"The lowest number of rainfall in the year is     "<<rainlow<<endl;
    cout<<"The average rainfall all year is                 "<<rainavg<<endl;
    cout<<"The total amount of rainfall this year is        "<<raintot<<endl;
    
    return 0;
}

