#include<iostream>
using namespace std;

int primrNum(int n)
{
    cout << 2  << " ";

    for (int i=2;i<n;i++)
    {   
        for (int j=2 ;j<i;j++)
        {
            if (i % j == 0)
            {
                break;
            } 
            else if (j == i-1)
            {
                cout << i << " ";
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter a Range: ";
    cin >> n;

    primrNum(n);
    return 0;
}