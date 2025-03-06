// pointer is Special variable that store address of other variable

#include<iostream>
using namespace std;

int main(){

    // pointer
    int a =5;
    int * p = &a;    
    cout << "Address of int a :" << p <<"And address of this stored address is: "<< &p << endl;
    
    float x = 5.5;
    float * q = &x;
    cout << "Address of float x :" << q <<"And address of this stored address is: "<< &q << endl;
    

    // pointer to pointer
    int **pp =&p;
    cout << "a addr : " << &a << endl;
    cout <<  "p value : "<<p << endl;
    cout << "p addr : " << &p << endl;
    cout << "pp value : "<<pp << endl;

    return 0;
}