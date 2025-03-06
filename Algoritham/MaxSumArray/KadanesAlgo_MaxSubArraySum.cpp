#include<iostream>
#include<climits>  // use for INT_MIN and INT_MAX
using namespace std;

int main(){
    int size=7;
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;
    int curSum = 0;

    for (int i = 0; i < size; i++){      
        curSum += arr[i];
        maxSum = max(maxSum, curSum);
        if(curSum < 0){
            curSum = 0; 
        }
    }

    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;

}