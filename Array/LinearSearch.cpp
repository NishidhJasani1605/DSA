#include<iostream>
using namespace std;

int LinearSearch(int arr[], int target , int size)
{

    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
        
    }
    return -1;
}

int main() {
    int a[]= {4,6,8,9,2} , size = 5;
    int target = 8;
   

    int ind  = LinearSearch(a, target , size);
    if (ind == -1){
        cout << "Number not found in array" << endl;

    }
    else
    {
        cout << "Your number is at position number : " << ind << endl;
    }
    
}