#include<iostream>
using namespace std;

int intersection(int a[] , int b[] ,int size){

    for (int i = 0; i <size; i++){
        for (int j = 0; j < size; j++){
            if (a[i] == b[j]){
                cout << a[i] << " ";
                break;
            }
        }
    }
}

int main(){
    int a[5] =  {1,2,3,4,5};
    int b[5] = {3,4,5,6,7};
    int size =5;

    cout << "Intersection of two arrays: " << endl;

    intersection(a,b,size);
}