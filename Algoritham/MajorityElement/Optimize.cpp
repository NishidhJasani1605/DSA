#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 1,1};
    int n = nums.size();

    // sort 

    sort(nums.begin() , nums.end());

    // freq count

    int freq=1 , ans = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
            }

        if (freq > n / 2) {
            cout << ans << endl;
            break;
            
        }
    }
        
    return 0;
}