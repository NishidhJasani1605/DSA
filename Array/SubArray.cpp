#include<iostream>
using namespace std;

int main(){
    int size=5;
    int arr[5] = {1,2,3,4,5};

    for (int st = 0; st < size; st++){
        for (int end = st; end < size; end++){
            for (int i=st; i<=end;i++){
                cout << arr[i] ;
            }
            cout<< " ";
        }
        cout << endl;
    }

    return 0;

}