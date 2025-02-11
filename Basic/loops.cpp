#include <iostream>
using namespace std;

// int main()
// {
//     int n =10;
//     int sum =0;
//     int i=0;
//     while(i<n){
//         sum =sum+i;
//         i++;
//         if (i==5){
//             break;
//         }
//     }
//     cout <<sum<<endl;
//     return 0;
// }

// sum of n odd number

int main(){
    int n , sum=0;
    cout << "Enter the numbers" << endl;
    cin >> n ;

    for (int i=0;i<=n;i++)
{
    if (i%2 != 0)
    {
        sum = sum + i;
    }
}

cout << "Sum of first " << n << " odd numbers is " << sum << endl;
 return 0;
}
