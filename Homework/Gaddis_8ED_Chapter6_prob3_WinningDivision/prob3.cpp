
/* 
 * File:   prob3.cpp
 * Author: Andrew Nicoletti
 * Created on July 21, 2016, 1:30 PM
 * Purpose: Winning Division
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 
float getSales(float);
void findHighest(float,float,float,float);
// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    float ne,se,nw,sw;
    // Input Data
    cout<<"Input the sales figure for Northeast Division"<<endl;
    cin>>ne;
    ne=getSales(ne);
    cout<<"Input the sales figure for Northwest Division"<<endl;
    cin>>nw;
    nw=getSales(nw);
    cout<<"Input the sales figure for Southeast Division"<<endl;
    cin>>se;
    se=getSales(se);
    cout<<"Input the sales figure for Southwest Division"<<endl;
    cin>>sw;
    sw=getSales(sw);
    // Process Data
    
    // Output Data
    findHighest(ne,nw,se,sw);
    
    return 0;
}

float getSales (float money){
    if(money<0){
        while(money<0){
            cout<<"Please input a number greater than 0"<<endl;
            cin>>money;
        }
    }
    return money;
}

void findHighest (float ne,float nw,float se,float sw){
    if(ne>nw&&ne>se&&ne>sw){
        cout<<"Northeast is the highest grossing division with an income of $"<<ne<<endl;
    }
    if(nw>ne&&nw>se&&nw>sw){
        cout<<"Northwest is the highest grossing division with an income of $"<<nw<<endl;
    }
    if(se>ne&&se>nw&&se>sw){
        cout<<"Southeast is the highest grossing division with an income of $"<<se<<endl;
    }
    if(sw>ne&&sw>nw&&sw>se){
        cout<<"Southwest is the highest grossing division with an income of $"<<sw<<endl;
    }
}
