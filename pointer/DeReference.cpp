#include<iostream>
using namespace std;

int main(){
    int a = 5 ;
    int * p = &a;
    int **ptr = &p;

    cout << "value of a :" << endl;
    cout << *(&a) << endl;
    cout << *p << endl;
    cout << **ptr << endl;

    cout << "Address of a : " << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *(&p) << endl;
    cout << *ptr << endl;

    cout << "Address of p :" << endl; 
    cout << &p << endl;
    cout << ptr << endl;
    cout << *(&ptr) << endl;

    cout << "Address of ptr :" << endl;
    cout << &ptr << endl;

    return 0;
}