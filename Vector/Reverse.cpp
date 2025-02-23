#include<iostream>
#include<vector>
using namespace std;

void reverseVec(vector<int>& v){
    int start = 0;
    int end = v.size() - 1; 

    while(start < end){
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;  // Swapping elements at start and end indices.

        start++;
        end--;
    }
}

int main(){

    vector<int> vec = {1, 2, 3, 4, 5};

    cout<< "Original vector is:";
    for(int  i : vec){
        cout << i << " ";
    }

    cout<<endl;
    reverseVec(vec);

    cout<<endl;

    cout<< "Reverse vector is:";
    for(int  i : vec){
        cout << i << " ";
    }

    
}