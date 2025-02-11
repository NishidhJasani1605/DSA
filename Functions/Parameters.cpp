#include <iostream>
using namespace std;

int sum(int a, int b){
    int s=a+b;
    return s;
}

int min (int a, int b){
    if(a<b){
        return a;
    } else {
        return b;
    }
}

int main (){
    cout << sum (5,4) << endl;

    cout << min(6,6) << endl;

    return 0;
}
