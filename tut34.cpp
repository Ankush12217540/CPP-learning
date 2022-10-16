#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int num){
        a=num;
    }

    // when no copy constructor is found , compiler supplies its own copy constructor
    Number(Number  &obj){
        cout<<"Copy Constructor callled "<<endl;
        a=obj.a;

    }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};

int main(){
    Number x,y,z(45) , z2;
    x.display();
    y.display();
    z.display();
    Number z1(x);  //  copy constructor invoked
    z1.display();
    // z1 should exactly resemble z or x or y

    z2= z;  // copy constructor not invoked , because z2 is already called above.
    z2.display();

    Number z3 = z;   // copy constructor invoked kyoki isi line me objects bana hain..
    z3.display();
    
    return 0;
}