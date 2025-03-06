#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int> hight , int n){
    int maxArea = 0;
    int area ;
    
    for (int left = 0 ; left < n-1 ; left++){
        for (int right = left+1 ; right <n ; right++){
            int width = right - left;
            int high = min(hight[right], hight[left]);
            area = width * high ;
            maxArea = max(maxArea, area);
        }
    }
    return maxArea;
}
int main(){
    vector<int> hight = {1,8,6,2,5,4,8,3,7};
    int n = hight.size();

    int ans = maxArea(hight, n);
    cout << "Maximum Area : " << ans << endl;


}