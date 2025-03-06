#include<iostream>
#include<vector>
using namespace std;

vector<int>ProductExceptSelf(vector<int> nums ,int n){
    vector<int> ans(n,1);

    for(int i = 0; i < n; i++){
        for(int j =0 ; j < n; j++){
            if(i!=j){
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

int main(){
    vector <int> nums = {1,2,3,4};
    int n = nums.size();

    vector<int> ans = ProductExceptSelf(nums, n);
    cout << "The product array is: ";
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
}