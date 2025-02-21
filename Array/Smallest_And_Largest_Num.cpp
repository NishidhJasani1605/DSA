#include<iostream>
using namespace std;

int SmallestNum(int a[5]){
    int min = a[0] , index;

    for (int i=0 ; i<5 ; i++){
        if (a[i] < min )
        {
            min = a[i];
        }
    }

    for (int i=0 ; i<5 ; i++){
        if (a[i] == min)
        {
            index = i;
        }
    }

    cout << min <<" is the smallest number at index "<< index << endl;

    return 0;
}

int LargestNum(int a[5]){
    int max = a[0], index;

    for (int i=0 ; i<5 ; i++){
        if (a[i] > max )
        {
            max = a[i];
        }
    }

    for (int i=0; i<5;i++){
        if (a[i] == max)
        {
            index = i;
        }
    }

    cout << max <<" is the largest number at index "<< index << endl;
    return 0;
}

int main (){

    int a[5];

    cout << "Enter 5 numbers: " << endl;
    for (int i=0; i<5; i++){
        cin >> a[i];
    }
    SmallestNum(a);
    LargestNum(a);

return 0;


}