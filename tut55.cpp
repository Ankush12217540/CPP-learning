                   // POINTERS TO DERIVED CLASSES
#include<iostream>
using namespace std;
class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying base class variable var_base "<<var_base<<endl;

    }  
};
class DerivedClass: public BaseClass{
public:
    int var_derived;
    void display(){
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
        cout<<"Displaying base class variable var_derived "<<var_derived<<endl;
    }
}; 
int main(){
    BaseClass * base_class_pointer; 
    BaseClass obj1;
    DerivedClass obj_derived;
    base_class_pointer= &obj_derived;
// base_class_pointer = &obj_derived;  // base class ke pointer ko Derived class ke object se point karawa diya
// its legal in c++

    base_class_pointer->var_base =34;
    // base_class_pointer-> var_derived= 134;  will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base=3400;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer= &obj_derived;
    derived_class_pointer->var_derived=98;
    derived_class_pointer->display();
return 0;
}
