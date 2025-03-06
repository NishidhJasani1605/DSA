#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> price, int n){
    int maxProfit = 0;
    int BestBuy = price[0];

    for (int i=1; i<n; i++){
        if(price[i] > BestBuy){   
            maxProfit = max(maxProfit, price[i] - BestBuy);
        }
        BestBuy = min(BestBuy, price[i]);
    }
    return maxProfit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();

    int ans = maxProfit(prices, n);
    cout << "Maximum Profit : " << ans << endl;
}