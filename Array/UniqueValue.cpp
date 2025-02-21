#include<iostream>
using namespace std;

void uniqueValue(int a[], int size) {
    // Create a frequency array to store the count of each element
    int count[100] = {0};  // Assuming the elements in the array are <= 100

    // Count the frequency of each element
    for (int i = 0; i < size; i++) {
        count[a[i]]++;
        // if a[i] == 2, then count[2]++ means we increment the value stored in the count[] array at index 2 by 1. So, for each occurrence of the element 2 in a[], the value of count[2] will increase by 1.
    }

    // Print the elements that appear only once
    for (int i = 0; i < size; i++) {
        if (count[a[i]] == 1) {  // If the element appears only once
            cout << a[i] << " ";
            count[a[i]] = -1;  // To ensure we print the element only once
        }
    }

    cout << endl;
}

int main() {
    int a[5] = {1, 1, 1,2,3};
    int size = 5;

    cout << "Unique values are: " << endl;
    uniqueValue(a, size); // Call function to find and print unique values

    return 0;
}
