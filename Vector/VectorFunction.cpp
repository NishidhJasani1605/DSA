#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> v1 = {'a','b','c','d','e','f'};

    // size function
    cout << "size of v1 = " << v1.size() << endl;
    for(char val : v1){
        cout << val << endl;
    }

    // pushback function
    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    cout << "size of v2 =" << v2.size() << endl;
    for(int val : v2){
        cout << val << endl;
    }
    
    // pop_back function
    v2.pop_back(); //30
    cout << "size of v2 after pop_back() =" << v2.size() << endl;
    for(int val : v2){
        cout << val << endl;
    }

    // front function
    //  it give the first element of the vector
    cout << "front of v2 = " << v2.front() << endl; //return first value

    // back function
    // it give the last element of the vector
    cout << "back of v2 = " << v2.back() << endl; //return last value
    
    //at function
    // it return the element at the given index
    cout << "at index 2 of v1 = " << v1.at(2) << endl; //return third value
    
    
    return 0;
}