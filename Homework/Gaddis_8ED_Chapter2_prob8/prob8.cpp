
/* 
 * File:   prob8.cpp
 * Author: Andrew Nicoletti
 * Created on June 24, 2016, 7:30 PM
 * Purpose: Total Purchase
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
    float price1,price2,price3,price4,price5,sbtotl,stax,total;     //all the necessary variables
    
    // Input Data
    price1=15.95f;
    price2=24.95f;
    price3=6.95f;
    price4=12.95f;
    price5=3.95f;

    stax=0.07f;  //sales tax

    // Process Data
       sbtotl=(price1+price2+price3+price4+price5);   //subtotal   
       total=(sbtotl*stax)+sbtotl; 
    // Output Data
       cout<<"Item1 $"<<price1<<endl;
       cout<<"Item2 $"<<price2<<endl;
       cout<<"Item3 $"<<price3<<endl;
       cout<<"Item4 $"<<price4<<endl;
       cout<<"Item5 $"<<price5<<endl;
       cout<<"Subtotal $"<<sbtotl<<endl;
       cout<<"Tax $"<<fixed<<setprecision(2)<<setw(2)<<stax*sbtotl<<endl;
       cout<<"Total $"<<total<<endl;
    
    return 0;
}

