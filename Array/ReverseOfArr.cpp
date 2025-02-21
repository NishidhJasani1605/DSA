#include<iostream>
using namespace std;

// Using 2 pointer approach
void Reverse(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    while(start < end){
         int temp =arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
    }
}


int main(){

    int a[] = {1,2,3,4,5};
    int size = 5;

    cout << "Original array is : " ;

    for(int i = 0; i < size; i++){
        cout <<  a[i] << " ";
        
    }

    cout << endl;

    Reverse(a,size);

    cout << "Reversed array is : " ;

for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
   


}