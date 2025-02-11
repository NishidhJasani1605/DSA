#include <iostream>
using namespace std;

void fib(int n){
    int a=0,b=1,c;

    if(n==1){
        cout << a;
        return;
    } else if(n==2){
       cout << a << " " << b;
        return;
    } else{
        cout << a << " " << b << " ";
        for (int i=0 ; i<n-2; i++){
            c = a+b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
}

int main(){
    int n;
    cout << "Enter a Range: ";
    cin >> n;

    fib(n);
    return 0;
}