#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Dynamic allocation
    vector<int> v1; //  size = 0,capacity = 0
    v1.push_back(1); //size = 1,capacity = 1
    v1.push_back(2); //size = 2,capacity = 2
    v1.push_back(3); //size = 3,capacity = 4
    v1.push_back(4); //size = 4,capacity = 4
    v1.push_back(5); //size = 5,capacity = 8
    cout << "Size of vector v1: " << v1.size() << endl;

    //Capacity always double thay 
    cout << "Capacity of vector v1: " << v1.capacity() << endl;
}