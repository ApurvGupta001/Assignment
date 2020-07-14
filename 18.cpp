#include <iostream> 
using namespace std; 
  
class base { 
public: 
    virtual void print() 
    { 
        cout << "Base class function executed" << endl; 
    } 
  
    void show() 
    { 
        cout << "Base class function executed" << endl; 
    } 
}; 
  
class derived : public base { 
public: 
    void print() 
    { 
        cout << "Derived Class Executed" << endl; 
    } 
  
    void show() 
    { 
        cout << "Derived Class Executed" << endl; 
    } 
}; 
  
int main() 
{ 
    base* obj; 
    derived d; 
    obj = &d; 
   
    obj->print(); 
  
    // Non-virtual function, binded at compile time 
    bptr->show(); 
} 