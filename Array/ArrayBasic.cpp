#include <iostream>
using namespace std;

int main(){

    int a[5] = {1,2,3,4,5};
    int b[] = {5,4,6};

    cout << b[0] << endl;
    cout << b[1] << endl;
    cout << b[2] << endl;

    int size = sizeof(a);
    cout << "Size of array a: " << size << endl;

    int len = sizeof(a)/sizeof(a[0]);
    cout << "Length of array a: " << len << endl;

    for (int i = 0; i < len; i++)
    {
        cout << a[i] << endl;
    }

    return 0;

}