#include<iostream>
#include<climits>  // use for INT_MIN and INT_MAX
using namespace std;

int main(){
    int size=7;
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;

    for (int st = 0; st < size; st++){
        int curSum = 0;
        for (int end = st; end < size; end++){
            curSum = curSum + arr[end];
            maxSum = max(maxSum,curSum);
        }
    }

    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;

}