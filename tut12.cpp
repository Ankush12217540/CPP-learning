#include<iostream>
using namespace std;

int main(){. 
    // what is pointer?----> data type which holds the address of other data types
    int a=3;
    int* b;
    b=&a; 
     
    
    // &------>(address of )operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl; 
    
    //  *----->(value at) Dereference operator 
    cout<<"The value at address b is "<<&b<<endl; 

    // pointer to pointer
    int** c=&b;
    cout<<"The address  of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value at(value at (c)) is "<<**c<<endl;
   
return 0;
}
