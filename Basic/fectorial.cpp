#include<iostream>
using namespace std;

int main(){
    int n,fect=1;

    cout << "Enter the number for Fectorial " << endl;
    cin>> n;
    for(int i=1;i<=n;i++){
        fect=fect*i;
    }
    if(n<0){
        cout << "Fectorial of negative number is not possible" << endl;
    }
    else{
         cout << "Factorial of " << n << " is " << fect << endl;
    }
   
    return 0;

}