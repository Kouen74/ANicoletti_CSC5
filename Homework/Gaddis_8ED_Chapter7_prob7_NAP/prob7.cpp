
/* 
 * File:   prob7.cpp
 * Author: Andrew Nicoletti
 * Created on July 28, 2016, 12:10 AM
 * Purpose: Number Analysis Program
 */
 
#include <iostream>     // System Library
#include <fstream>      // File writing/Reading
#include <string>
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    const int MAX=300;
    int count=0,num[MAX],numlow,numhigh,numtotl;
    string filename;
    ifstream inputFile;
    // Input Data
    cout<<"This program will analyze numbers from a file"<<endl;
    cout<<"Please input the name of the file along with the extension, you wish to use."<<endl;
    cout<<"Please do not open a file containing more than 300 numbers"<<endl;
    cout<<"Example: numbers.txt"<<endl;
    getline(cin,filename);
    // Process Data
    inputFile.open(filename.c_str());
    
    
    numtotl=0;
    
    while(count<MAX&&inputFile>>num[count]){
        
        
        numtotl+=num[count];
        count++;
    }    
    inputFile.close();
    
    numlow=num[0];
    for(int loop=0;loop<count;loop++){
        if(num[loop]<numlow){
            numlow=num[loop];
        }
    }
    
    numhigh=num[0];
    for(int inc=0;inc<count;inc++){
        if(num[inc]>numhigh){
            numhigh=num[inc];
        }
    }
    // Output Data
    cout<<"The number totaled is "<<numtotl<<endl;
    cout<<"The lowest number is "<<numlow<<endl;
    cout<<"The highest number is "<<numhigh<<endl;
    cout<<"The average number is "<<numtotl/count<<endl;
    
    return 0;
}

