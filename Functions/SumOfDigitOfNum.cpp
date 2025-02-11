#include<iostream>
using namespace std;

int sumOfDigits(int n)
{   
    int sum =0;
    while(n>0){
        sum=sum + (n%10);
        n=n/10;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter Any number: ";
    cin >> n;

    cout << "Sum of DIgits " << n << " Is =" <<sumOfDigits(n) << endl;

    return 0;
}