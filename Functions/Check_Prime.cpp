#include <iostream>
using namespace std;

int prime(int n)
{
    for (int i=2;i<n;i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            return 0;
    } else {
        cout << "Prime";
        return 1;
    }
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    prime(n);
}