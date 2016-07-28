
/* 
 * File:   prob6.cpp
 * Author: Andrew Nicoletti
 * Created on July 27, 2016, 11:00 PM
 * Purpose: Rain or Shine
 */
 
#include <iostream>     // System Library
#include <fstream>      // Writing a file
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants
const int MONTH=3,DAY=30;
// Functions Prototypes 
void display(char [][DAY]);
// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    
    char weather[MONTH][DAY];
    ifstream inputFile;
    // Input Data
    inputFile.open("RainOrShine.txt");      // Reading contents from a file
    for(int count=0;count<MONTH;count++){
        for(int loop=0;loop<DAY;loop++){
            inputFile>>weather[count][loop];
        }
    } 
   
    inputFile.close();  // Closing File
    
    display(weather);
    
    return 0;
}

void display(char rcs[][DAY]){
    int rain=0,sun=0,cloud=0,r1=0,r2=0,r3=0;    //r1,2, and 3 are holder variables for the respective months;
    //Displays the Array
    for(int count=0;count<MONTH;count++){
        for(int loop=0;loop<DAY;loop++){
            cout<<" Month "<<count+1<<" Day "<<loop+1<<": "<<rcs[count][loop];
            if(loop%3==0)cout<<endl;
            if(rcs[count][loop]=='R')rain+=1;
            if(rcs[count][loop]=='R'&&count==0)r1+=1;
            if(rcs[count][loop]=='R'&&count==1)r2+=1;
            if(rcs[count][loop]=='R'&&count==2)r3+=1;
            if(rcs[count][loop]=='S')sun+=1;
            if(rcs[count][loop]=='C')cloud+=1;
        }
    }
    
    cout<<"Total amount of "<<endl;
    cout<<"Rain: "<<rain<<endl;
    cout<<"Sunny: "<<sun<<endl;
    cout<<"Cloudy: "<<cloud<<endl;
    cout<<"The highest amount of rain of all the months is "<<endl;
    if(r1>=r2&&r1>=r3){
        cout<<"First month with a total of "<<r1<<" days of rain"<<endl;
    }
    if(r2>=r1&&r2>=r3){
        cout<<"Secondt month with a total of "<<r1<<" days of rain"<<endl;
    }
    if(r3>=r2&&r3>=r1){
        cout<<"Third month with a total of "<<r1<<" days of rain"<<endl;
    }

}