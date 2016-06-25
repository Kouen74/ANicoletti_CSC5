
/* 
 * File:   prob13.cpp
 * Author: Andrew Nicoletti
 * Created on June 24, 2016, 8:30 PM
 * Purpose:  Circuit Board Price
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
    float profit,cbprice,sprice;    //profit percentage, the cb price and sales price
    
    // Input Data
    profit=.35f;
    cbprice=14.95f;
    // Process Data
    sprice=(profit*cbprice)+cbprice;
    // Output Data
    cout<<"A 35% profit of a circuit board that costs the company $"<<cbprice<<endl;
    cout<<"will place the circuit board at $"<<setw(2)<<setprecision(4)<<sprice<<endl;
    
    return 0;
}

