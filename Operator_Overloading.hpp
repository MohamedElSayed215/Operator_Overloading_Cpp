#include <iostream>
#pragma once 
using namespace std ;

class Data
{
    private : 

        int x__ ; 
        int y__ ;
        
    public :
    /*
        Put your constructor
    */


    Data operator +(const Data& obj)const ;    
    Data operator + (int num );
    Data operator *(const Data& obj)const;
    Data operator -(const Data& obj)const;
    Data operator /(const Data& obj)const ; 
    Data operator >>(int val)const;
    Data operator <<(int val)const ; 
    Data& operator=(const Data & obj);
    Data operator++(int);
    Data(const Data& obj);
    Data& operator++();    
    friend Data operator + (int num ,  const Data& obj) ;
    friend ostream& operator <<(ostream& OUT ,const Data& obj );
} ; 
