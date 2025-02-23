#include<iostream>
#include<vector>
using namespace std;

int linearSearch(const vector<int>& a , int find){

    for (size_t i = 0; i<a.size(); i++){
        if(a[i]==find){
            return i;
    
        }
    }
    return -1;
}

int main() {
    vector<int> v;
    int find ;
    int size;

    cout << "Enter the size of array : " ;
    cin >> size;

    cout << "Enter the all numbers :" << endl;
    for (int i = 0; i < size ; i++){
        int num ;
        cin >> num;
     v.push_back(num);
    }

    cout << "Enter the number you want to find :" << endl;
    cin >> find;

    int index = linearSearch(v, find);


    if(index==-1){
        cout << "Number not found" << endl;
    }
    else{
        cout << "Number found at index " << index << endl;
    }
    return 0;

}