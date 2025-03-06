#include<iostream>
#include<vector>
using namespace std;

// Time complexity
vector<int> ProductExceptSelfTime(vector<int>& nums, int n){
    vector<int> prefix(n ,1);
    vector<int> suffix(n ,1);
    vector<int> ans(n,1);

    // prefix product array
    for(int i=1 ;i< n ; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    
    // suffix product array
    for (int i=n-2 ; i>=0 ; i--){
        suffix[i] = suffix[i+1] * nums[i+1]; 
    }

    // product array
    for(int i=0 ; i< n ; i++){
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
}

// Time and space complexity
vector<int> ProductExceptSelfTimeSpace(vector<int>& nums, int n){
    vector<int> ans(n,1);

    for (int i=1 ;i<n ; i++){
        ans[i] = ans[i-1]*nums[i-1];
    }

    int suffix = 1;
    for (int i=n-2 ;i>=0 ; i--){
        suffix = suffix * nums[i+1];
        ans[i] = ans[i] * suffix;
    }
    return ans;
}

int main(){
    vector <int> nums = {1,2,3,4};
    int n = nums.size();

    vector<int> ans = ProductExceptSelfTime(nums,n);
    cout << "The product array with time complexity is: ";
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    vector<int> ans1 = ProductExceptSelfTimeSpace( nums, n);

    cout << "The product array with time and space complexity is: ";
    for(int i = 0; i < n; i++){
        cout << ans1[i] << " ";
    }
}