#include<iostream>
#include<vector>
using namespace std;

// mejority element >n/2 times e.x{1,2,3,1,1,1} 1 is majority element
int MejorityElement(int arr[],int n){

    vector<int> count(100 , 0) ;

    for (int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for (int i : count){
        if(i > n/2){
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int arr[11] = {1,2,3,1,1,1,2,2,2,2,2};
    int size = 11;

    int me = MejorityElement(arr,size);

    if(me != -1){
        cout<<"Mejority Element is : "<<me<<endl;
        
    }else{
        cout<<"Mejority Element is not present"<<endl;
    }
    
}