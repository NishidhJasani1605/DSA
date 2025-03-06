#include<iostream>
#include<vector>
using namespace std;

int TwoPointer(vector<int> hight , int n ){
    int maxWater = 0;
    int lp = 0 , rp = n-1;

    while(lp < rp){
        int w = rp-lp;
        int ht = min(hight[lp], hight[rp]);
        int currentWater = w * ht;
        maxWater = max(maxWater, currentWater);

        if(hight[lp] < hight[rp]){
            lp++;    
        }else{
            rp--;
        }
    }
    return maxWater;
}

int main(){
    vector<int> hight = {1,8,6,2,5,4,8,3,7};
    int n = hight.size();

    int ans = TwoPointer(hight, n);
    cout << "Maximum Area : " << ans << endl;

}