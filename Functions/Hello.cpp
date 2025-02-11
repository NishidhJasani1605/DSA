#include <iostream>
using namespace std;

int printHello(){
    cout <<"Hello" << endl;
    return 5;
}

int main(){
    //function claa / invoke
    int val = printHello();
    cout << "val =" << val << endl;
    cout << "Or" << endl;
    cout << printHello() << endl; 
    return 0;
}