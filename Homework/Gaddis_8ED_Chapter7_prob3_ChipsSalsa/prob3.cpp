
/* 
 * File:   prob3.cpp
 * Author: Andrew Nicoletti
 * Created on July 27, 2016, 03:20 AM
 * Purpose: Chips and Salsa
 */
 
#include <iostream>     // System Library
#include <string>       // String Library
#include <iomanip>      // Format Library
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    const int SALSA=5;
    string nameSal[SALSA],nameHigh,nameLow;
    int jar[SALSA],salsaTot,salsaAvg,salsaHi,salsaLo;
    
    // Input Data
    for(int count=0;count<SALSA;count++){
           cout<<"Please input the name of the type of salsa"<<endl;
           cin>>nameSal[count];
           cout<<"Input the amount of jars sold for that salsa"<<endl;
           cin>>jar[count];
           while(jar[count]<0){
               cout<<"please enter a 0 or a positive number"<<endl;
               cin>>jar[count];
           }
    }

    // Process Data
    salsaHi=jar[0];
    nameHigh=nameSal[0];
    for(int num=1;num<SALSA;num++){
        if(jar[num]>salsaHi){
            salsaHi=jar[num];
            nameHigh=nameSal[num];
        }
    }
    
    salsaLo=jar[0];
    nameLow=nameSal[0];
    for(int n=1;n<SALSA;n++){
        if(jar[n]<salsaLo){
            salsaLo=jar[n];
            nameLow=nameSal[n];
        }
    }
    
    salsaTot=0;
    for(int ctotal=0;ctotal<SALSA;ctotal++){
        salsaTot+=jar[ctotal];
    }
    
    salsaAvg=salsaTot/SALSA;
    // Output Data
    cout<<"Salsa sales by type________________________________________________"<<endl;
    cout<<nameSal[0]<<fixed<<setw(15)<<jar[0]<<endl;
    cout<<nameSal[1]<<fixed<<setw(15)<<jar[1]<<endl;
    cout<<nameSal[2]<<fixed<<setw(15)<<jar[2]<<endl;
    cout<<nameSal[3]<<fixed<<setw(15)<<jar[3]<<endl;
    cout<<nameSal[4]<<fixed<<setw(15)<<jar[4]<<endl;
    cout<<"Salsa total sales:               "<<salsaTot<<endl;
    cout<<"The highest selling salsa is:    "<<nameHigh<<" selling "<<salsaHi<<endl;
    cout<<"The lowest selling salsa is:     "<<nameLow<<" selling "<<salsaLo<<endl;
    
    
    return 0;
}

