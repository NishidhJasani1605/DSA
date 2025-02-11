#include <iostream>
using namespace std;

int fect(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * fect(num - 1);
    }
}

int nCr(int n, int r){

    if (r>n){
        return 0;
    }
    
    int num =fect(n);
    int denom = fect(r) * fect(n-r);

    return num/denom;
}

int main(){
    int n,r;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the range: ";
    cin >> r;

    int ans = nCr(n,r);

    cout << "Your ans is =" << ans <<endl;

}