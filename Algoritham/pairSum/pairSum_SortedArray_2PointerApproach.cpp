#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums ,int target){
   vector<int> ans;
    int n=nums.size();
   
    int start=0 , end = n-1;

    while(start<end){
        int pairSum =nums[start] +nums[end];

        if(pairSum > target){
            end--;
        } else if(pairSum < target){
            start++;
        } else if(pairSum == target){
            ans.push_back(nums[start]);
            ans.push_back(nums[end]);
            return ans;
        } else {
            cout << "No pair found" << endl;
        }

    }

}

int main(){
    vector<int> nums ={2,7,11,15};
    int target = 18;
    
    vector<int> result = pairSum(nums, target);
    
    cout << "The pair of indices whose sum is " << target << " are: ";
    for(int i : result)
        cout << i << " ";
    cout << endl;

    
}