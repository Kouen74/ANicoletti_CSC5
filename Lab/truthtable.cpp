/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on June 27, 2016, 11:19 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    bool x,y;
    cout<<"The truth table."<<endl;
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y";
    cout<<"!(X&&Y) !X||!Y"<<endl;
    
    // First Row
    
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     "<<endl;
    
    // Second Row
    x=true;y=false;
     cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     "<<endl;
    
    // Third Row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     "<<endl;
    
    // Forth Row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"     "<<endl;
    
    return 0;
}

