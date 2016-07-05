
/* 
 * File:   prob4.cpp
 * Author: Andrew Nicoletti
 * Created on June 30, 2016, 1:40 PM
 * Purpose: Black Jack Values
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    char card;
    int value=0, excess=0;
    
    // Input Data
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    // Process Data
    switch(card){
        case'K':
        case'Q':
        case'J':
        case'T':value+=10;break;
        case'9':
        case'8':
        case'7':
        case'6':
        case'5':
        case'4':
        case'3':
        case'2':value+=(card-48);break;
        case'A':value+=11;excess=10;
            
    }
    
    // Output Data
    cout<<"The value of the hand at this point = "<<value<<endl;
    
     // Input Data Card 2
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    // Process Data
    switch(card){
        case'K':
        case'Q':
        case'J':
        case'T':value+=10;break;
        case'9':
        case'8':
        case'7':
        case'6':
        case'5':
        case'4':
        case'3':
        case'2':value+=(card-48);break;
        case'A':value+=11;excess=10;
            
    }
    if(value>21)value-=excess;
    
    // Output Data Card 2
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    // Input Data Card 2
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    // Process Data
    switch(card){
        case'K':
        case'Q':
        case'J':
        case'T':value+=10;break;
        case'9':
        case'8':
        case'7':
        case'6':
        case'5':
        case'4':
        case'3':
        case'2':value+=(card-48);break;
        case'A':value+=11;excess=10;
            
    }
    if(value>21)value-=excess;
    
    // Output Data Card 2
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    // Input Data Card 2
    cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
    cin>>card;
    // Process Data
    switch(card){
        case'K':
        case'Q':
        case'J':
        case'T':value+=10;break;
        case'9':
        case'8':
        case'7':
        case'6':
        case'5':
        case'4':
        case'3':
        case'2':value+=(card-48);break;
        case'A':value+=11;excess=10;
            
    }
    if(value>21)value-=excess;
    
    // Output Data Card 2
    cout<<"The value of the hand at this point = "<<value<<endl;
    
    return 0;
}

