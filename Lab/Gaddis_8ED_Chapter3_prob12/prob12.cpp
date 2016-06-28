
/* 
 * File:   prob12.cpp
 * Author: Andrew Nicoletti
 * Created on June 28, 2016, 12:30 PM
 * Purpose: Temperature conversion
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float ceq,cintrp,f;
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    
    // Input Data
    cout<<"Input the temperature in degree fahrenheit ";
    cout<<"for conversion to celsius"<<endl;
    cin>>f;
    
    // Process Data
    ceq=(f-32)*5/9;  //Linear equation y=mx+b
    cintrp=c1+(c2-c1)*(f-f1)/(f2-f1);   //Similar triangles or linear
    // Output Data
    cout<<f<<" deg fahrenheit = "<<ceq<<" deq centrigrade"<<endl;
    
    return 0;
}

