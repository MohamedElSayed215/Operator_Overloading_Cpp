#include "review.hpp"


    Data Data::operator +(const Data& obj)const 
    {   
        int new_x__ = this->x__ + obj.x__;  
        int new_y__ = this->y__ + obj.y__;
        return /*Use ur Parameterized Constructor*/;;
    }
       
      
       Data Data::operator + (int num )
     {
        int temp_x = num + this->x__ ; 
        int temp_y = num + this->y__ ;
        cout<<"add num & obj Data::operator called ! \n" ;
        return /*Use ur Parameterized Constructor*/;;
     } 
    
   
    Data Data::operator *(const Data& obj)const
    {   
        int new_x__ = this->x__ * obj.x__;  
        int new_y__ = this->y__ * obj.y__;
        return /*Use ur Parameterized Constructor*/;;
    }
     Data Data::operator -(const Data& obj)const
    {   
        int new_x__ = this->x__ - obj.x__;  
        int new_y__ = this->y__ - obj.y__;
        return /*Use ur Parameterized Constructor*/;;
    }
     Data Data::operator /(const Data& obj)const
    {   
        int new_x__ = this->x__ / obj.x__;  
        int new_y__ = this->y__ / obj.y__;
        return /*Use ur Parameterized Constructor*/;;
    }
     Data Data::operator >>(int val)const
    {   
        int new_x__ = this->x__ >>val;  
        int new_y__ = this->y__ >>val ;
        return /*Use ur Parameterized Constructor*/;;
    }
     Data Data::operator <<(int val)const
    {   
        int new_x__ = this->x__ <<val;  
        int new_y__ = this->y__ <<val ;
        return /*Use ur Parameterized Constructor*/;;
    }
    Data& Data::operator=(const Data & Copy_obj)
    {   
        
        this->x__ =Copy_obj.x__ ; 
        this->y__ = Copy_obj.y__ ; 
        //  put in case if there is PTR as a member !   
                return *this; 
    }
    Data Data::operator++(int)
    {   
        Data Temp  = *this ; // copy the old value !   
        x__ ++ ; 
        y__ ++ ; 
        return Temp;
    }
    

    Data& Data::operator++()
    {
        ++ x__  ; 
        ++ y__  ; 
        return *this ; 
    }    
    
    
    
    Data operator + (int num ,  const Data& obj) 
      {
        
        int temp_x = num + obj.x__ ; 
        int temp_y = num + obj.y__ ;
        cout<<"friend method called ! \n" ;
        return /*Use ur Parameterized Constructor*/;
      
      }
      ostream& operator <<(ostream& OUT ,const Data& obj )
     {      
            OUT<<obj.x__ <<"\n"<<obj.y__ <<endl ; 
            return OUT ;
     } 
 

