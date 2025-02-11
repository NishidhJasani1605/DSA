#include <iostream>
using namespace std;

int main()
    {
        int n;
        bool isPrime = true;
        cout<<"Ente the number :" << endl;
        cin >> n;

        for (int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == false)
            {
                cout <<n <<"Is not prime number." <<endl;
            }else{
                cout <<n <<"Is prime number." <<endl;
            }


    }


