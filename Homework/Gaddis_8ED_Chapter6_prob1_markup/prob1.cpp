
/* 
 * File:   prob1.cpp
 * Author: Andrew Nicoletti
 * Created on July 21, 2016, 1:00 PM
 * Purpose: Mark up
 */
 
#include <iostream>     // System Library
#include <iomanip>      // Format Library
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 
float calculateRetail (float,float);
// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float cost,markup,total;
    
    // Input Data
    cout<<"What is the wholesale cost of the item?"<<endl;
    cin>>cost;
    if(cost<0){
        while(cost<0){
            cout<<"Must enter a positive value."<<endl;
            cin>>cost;
        }
    }
    cout<<"What is the markup percentage(in %)?"<<endl;
    cin>>markup;
    if(markup<0){
        while(markup<0){
            cout<<"Must enter a positive value."<<endl;
            cin>>markup;
        }
    }
    
    // Process Data
    total=calculateRetail(cost,markup);
    // Output Data
    cout<<"The retail price of that item is $"<<fixed<<setprecision(2)<<total<<endl;
    
    return 0;
}

float calculateRetail(float cost,float markup){
    cost=cost+cost*(markup/100);
    return cost;
}