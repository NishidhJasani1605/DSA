#include <iostream>
using namespace std;

int DropBit(int num){
    int Dropbit = num & 1;
    return Dropbit;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num; 

    int db = DropBit(num);
    cout << "The dropped bit is: " << db << endl;

    if(db == 0){
        cout << "The number is a power of 2" << endl;
    }
    else{
        cout << "The number is not a power of 2" << endl;
    }
    return 0;

}

// Output:  
    // Enter a number: 16
    // The dropped bit is: 0
    // The number is a power of 2