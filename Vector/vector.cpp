#include <iostream>
#include <vector> 
using namespace std;

int main() {
    vector<int> vec1; // size = 0

    if (!vec1.empty()) { 
        cout << vec1[0] << endl; 
    } else {
        cout << "vec1 is empty!" << endl;
    }

    vector<char> vec2 = {'a','b','c','d','e'}; // size = 3
    
    for (char val : vec2) {
        cout << val << " ";
    }

    cout << endl;

    vector <int> vec3(3,0); // size = 3  , {0,0,0}
    cout << vec3[0] << endl;


    for (int i : vec3)
    {
        cout << i << " ";
    }

    return 0;
}
