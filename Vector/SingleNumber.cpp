#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ans =0 ;

    vector<int> vec = {1,4,4,5,6,7,8,5,6,7,8};
    for(int num : vec){
        ans = ans ^ num;
    }
    cout << "The unique number is: " << ans << endl;
    return 0;
}
