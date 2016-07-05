
/* 
 * File:   prob2.cpp
 * Author: Andrew Nicoletti
 * Created on July 04, 2016, 1:30 PM
 * Purpose: Roman Numeral Conversion
 */
 
#include <iostream>     // System Library

using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
   
    // Declare Variables
   unsigned short x;                    //number to convert
   unsigned char n1000s,n100s,n10s,n1s; //stripping of digits 
    
   // Input Data
   cout<<"Input a number from 1 to 3000 to convert"<<endl;
   cout<<"to a Roman Numeral"<<endl;
   cin>>x;
   
    // Process Data
   if(x<1||x>3000)return 1;
  
    // Output Data
   //Thousand position
   n1000s=(x-x%1000)/1000;
   switch(n1000s){
       case 3:cout<<"M";
       case 2:cout<<"M";
       case 1:cout<<"M";
   }
   x-=n1000s*1000; 
   
   //Hundred position
   n100s=(x-x%100)/100;
   switch(n100s){
       case 9:cout<<"CM";break;
       case 8:cout<<"DCCC";break;
       case 7:cout<<"DCC";break;
       case 6:cout<<"DC";break;
       case 5:cout<<"D";break;
       case 4:cout<<"CD";break;
       case 3:cout<<"C";
       case 2:cout<<"C";
       case 1:cout<<"C";
   }
   x-=n100s*100; 
   
   //Tens position
   n10s=(x-x%10)/10;
   switch(n10s){
       case 9:cout<<"IC";break;
       case 8:cout<<"LXXX";break;
       case 7:cout<<"LXX";break;
       case 6:cout<<"LX";break;
       case 5:cout<<"L";break;
       case 4:cout<<"XL";break;
       case 3:cout<<"X";
       case 2:cout<<"X";
       case 1:cout<<"X";
   }
   x-=n10s*10; 
   
   //Ones position
   n1s=(x-x%1)/1;
   switch(n1s){
       case 9:cout<<"IX";break;
       case 8:cout<<"VIII";break;
       case 7:cout<<"VII";break;
       case 6:cout<<"VI";break;
       case 5:cout<<"V";break;
       case 4:cout<<"IV";break;
       case 3:cout<<"I";
       case 2:cout<<"I";
       case 1:cout<<"I";
   }
   
    return 0;
}

