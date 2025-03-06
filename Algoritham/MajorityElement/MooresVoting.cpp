#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 1,2};
    int n = arr.size();
    int freq =0 , ans =0 ;

    for (int i = 0; i < n; i++){
        if(freq == 0){
            ans = arr[i];
        }
        if (ans == arr[i]){
            freq++;            
        }
        else{
            freq--;
        }
    }

    int count =0;

    fot (int val : arr){
        if(val == ans){
            count++;
        }
    }

    if(count > n/2){
        cout<<ans<<endl;
    }
    else{
        cout<<"No Majority Element"<<endl;
    }
   
    return 0;
}