#include<iostream>
using namespace std;

int main() 
{
    // cout << "Hello DSA!!!" <<endl;
    // cout << "Hello DSA!!!" << "\n";
    // cout << "Hello DSA!!! \n" <<endl;
    // cout << "Hello DSA!!! \n By Me" <<endl;

    // int age ;
    // cout << "Enter the age :";
    // cin >> age;
    // cout << "Your age is "<< age << " Years" << endl;

    int a,b;

    cout << "Enter two numbers : ";
    cin >> a >> b;
    int sum = a+b;
    cout << "Sum is :" << sum <<endl;

    int div = a-b;
    cout << "Subtraction is :" << div <<endl;

    int mul = a*b;
    cout << "Multiplication is :" << mul <<endl;

    int mod = a%b;
    cout << "Modulus is :" << mod <<endl;
     return 0;
} 