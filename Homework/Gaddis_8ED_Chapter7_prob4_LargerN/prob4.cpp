
/* 
 * File:   prob4.cpp
 * Author: Andrew Nicoletti
 * Created on July 27, 2016, 05:10 AM
 * Purpose: Larger then N
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 
void larger(int [],int,int);
// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    const int SIZE=4;
    int numbers[SIZE]={1,2,3,4},digit=0;
    // Input Data
    
    // Process Data
    larger(numbers,SIZE,digit);
    // Output Data
   
    
    return 0;
}

void larger(int array[],int size, int num){
    cout<<"This problem is stupid."<<endl;
    for(int count=0;count<size;count++){
        cout<<array[count]<<endl;
    }
    cout<<"and last but not least...maybe?"<<num<<endl;
}