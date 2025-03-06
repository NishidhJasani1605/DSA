#include<iostream>
using namespace std;

// pass by reference using alias
void changeA(int &b){
    b=20;
}

int main(){
    int a = 5;

    changeA(a);

    cout<<a<<endl;

    return 0;
}