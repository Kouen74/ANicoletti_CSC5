
/* 
 * File:   prob7.cpp
 * Author: Andrew Nicoletti
 * Created on July 03, 2016, 08:30 AM
 * Purpose: Box Office
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
    string nMovie;
    int aTick,cTick;
    float aPrice,cPrice,gross,net;
    // Input Data
    cout<<"What's the name of the movie?"<<endl;
    getline(cin,nMovie);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>aTick;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>cTick;
    
    // Process Data
    gross=(aTick*10.00)+(cTick*6.00);
    // Output Data
    cout<<setw(35)<<' '<<nMovie<<endl;
    cout<<"Adult tickets sold:        "<<setw(15)<<aTick<<endl;
    cout<<"Child tickets sold:        "<<setw(15)<<cTick<<endl;
    cout<<"Gross box office profit:   "<<setw(15)<<fixed<<setprecision(2)<<gross<<endl;
    cout<<"Net box office profit:     "<<setw(15)<<fixed<<setprecision(2)<<gross*.2<<endl;
    cout<<"Amount paid to Distributor:"<<setw(15)<<fixed<<setprecision(2)<<gross-(gross*.2)<<endl;
    
    return 0;
}

