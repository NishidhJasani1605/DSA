#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the Dimond: ";
    cin >> n;

    // top 
    for(int i = 0; i <n; i++){
        // spacce
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
         }
        //  stare 
        cout << "*" ;
        
        // again space 
        if (i!=0)
        {
            for (int j = 0; j < 2*i-1; j++) {
            cout << " ";
            }
        // agsin stare 
            cout << "*" ;
        }
        cout << endl;
    }

    // bottom 
    for (int i = 0; i < n-1; i++) {
        // space 
        for (int j = 0; j <i+1; j++) {
        cout << " ";
    }
    // stare 
    cout << "*" ;
    
    if(i!=n-2){
    // space
        for (int j = 0; j < 2*(n-i-2)-1 ; j++) {
            cout << " ";
        }
        cout << "*" ;
    }
    cout << endl;
    }
    
return 0;
}

// output 
// Enter the size of the Dimond: 5
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
 