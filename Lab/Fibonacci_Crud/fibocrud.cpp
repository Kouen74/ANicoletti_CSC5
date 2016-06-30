
/* 
 * File:   template.cpp
 * Author: Andrew Nicoletti
 * Created on June 27, 2016, 12:30 PM
 * Purpose: Template
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
    float crudWt,curntWt;//crud weight in lbs
    int fi=1,fip1=1,fip2;//fibonacci sequence
    int days=0;//Number of Days
    
    // Input Data
    cout<<"How many lbs of crud do you have?"<<endl;
    cin>>crudWt;
    
    
    // Process Data Day 0
    curntWt=crudWt*fi;
    cout<<"Fi Days Weight"<<endl;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<crudWt;
    
    
    // Process Data Day 5
    curntWt=crudWt*fip1;
    days+=5;
    cout<<"Fi Days Weight"<<endl;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<crudWt;
    
    // Process Data Day 10
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<"Fi Days Weight"<<endl;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt;
    
    // Process Data Day 15
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<"Fi Days Weight"<<endl;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt;
    
    // Process Data Day 20
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<"Fi Days Weight"<<endl;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt;
    
    // Output Data
   
    
    return 0;
}

