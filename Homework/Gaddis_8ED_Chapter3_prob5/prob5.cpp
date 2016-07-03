
/* 
 * File:   prob5.cpp
 * Author: Andrew Nicoletti
 * Created on July 03, 2016, 08:00 AM
 * Purpose: Male and Female percentages
 */
 
#include <iostream>     // System Library
#include <iomanip>
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float males,females,maleprc, femaleprc;    //percentages often spill into the fractional realm, hence the float.
    // Input Data
    cout<<"Enter the number of males in the class:"<<endl;
    cin>>males;
    cout<<"Enter the number of females in the class:"<<endl;
    cin>>females;
    // Process Data
    maleprc=males/(males+females);
    femaleprc=females/(males+females);
    // Output Data
    cout<<"The percentage of males in the class is"<<endl;
    cout<<fixed<<setprecision(2)<<setw(4)<<maleprc*100<<"%"<<endl;
    cout<<"The percentage of females in the class is"<<endl;
    cout<<fixed<<setprecision(2)<<setw(4)<<femaleprc*100<<"%"<<endl;
    return 0;
}

