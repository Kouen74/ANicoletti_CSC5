
/* 
 * File:   grademenu.cpp
 * Author: Andrew Nicoletti
 * Created on June 28, 2016, 1:30 PM
 * Purpose: How to menu
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
    char choice;
    
    // Input Data  
    cout<<"Menu program"<<endl;
    cout<<"Choose how to determine your grade"<<endl;
    cout<<"Type 1 for switch"<<endl;
    cout<<"Type 2 for ternary operator"<<endl;
    cout<<"Type 3 for independent if's"<<endl;
    cout<<"Type 4 for dependent if's"<<endl;
    cin>>choice;
    
    // Process Data
    
    switch(choice){
        case '1':{
                    
             // Declare Variables
                unsigned int score; //Input [0,100]
                char grade; //Output [A,B,C,D,F]

            // Input Data
                 cout<<"Input the score [0,100] output will be the grade"<<endl;
                cin>>choice;

            // Process Data
                switch(score/10){
                case    11:
                case    10:
                case    9:grade='A';break;
                case    8:grade='B';break;
                case    7:grade='C';break;
                case    6:grade='D';break;
                default:grade='F';
            }
            // Output Data
                cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
                break;
                }
            
        case '2':{
                   // Declare Variables
                  unsigned int score; //Input [0,100]
                    char grade; //Output [A,B,C,D,F]
    
                    // Input Data
                    cout<<"Input the score [0,100] output will be the grade"<<endl;
                    cin>>score;

                    // Process Data
                    grade=(score>=90)?'A':
                        (score>=80)?'B':
                        (score>=70)?'C':
                        (score>=60)?'D':'F';

                    // Output Data
                    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
                    break;
                    }
        case '3':{
                        // Declare Variables
                   unsigned int score; //Input [0,100]
                   char grade; //Output [A,B,C,D,F]

                   // Input Data
                   cout<<"Input the score [0,100] output will be the grade"<<endl;
                   cin>>score;

                   // Process Data
                   grade='F';  //Default Value
                   if(score<=120&&score>=90)grade='A';
                   if(score<90&&score>=80)  grade='B';
                   if(score<80&&score>=70)  grade='C';
                   if(score<70&&score>=60)  grade='D';

                   // Output Data
                   cout<<score<<" equates to a "<<grade<<" grade!"<<endl;   
                   break;
                       }
        case '4':{
                                                // Declare Variables
                         unsigned int score; //Input [0,100]
                         char grade; //Output [A,B,C,D,F]

                         // Input Data
                         cout<<"Input the score [0,100] output will be the grade"<<endl;
                         cin>>score;

                         // Process Data
                         if(score>=90)grade='A';
                         else if(score>=80)grade='B';
                         else if(score>=70)grade='C';
                         else if(score>=60)grade='D';
                         else              grade='F';

                         // Output Data
                         cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
                         break;
                       }
                           
                           
                       default:cout<<"Blah"<<endl;
                       
    }
    
    // Output Data
   
    
    return 0;
}

