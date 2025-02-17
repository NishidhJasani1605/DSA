#include <iostream>
#include <bitset>

using namespace std;

unsigned int reverseBits(unsigned int num) {
    // Automatically detect the bit length
    int bit_size = 0;
    unsigned int temp = num;

    while (temp > 0) {  // Count significant bits
        bit_size++;
        temp >>= 1;
    }

    if (bit_size == 0) bit_size = 1;  // Handle edge case for num = 0

    unsigned int reversed_num = 0;

    for (int i = 0; i < bit_size; i++) {
        int last_bit = num & 1;  // Extract last bit
        reversed_num = (reversed_num << 1) | last_bit;  // Shift left and add last bit
        num >>= 1;  // Shift right to process next bit
    }

    return reversed_num;
}

int main() {
    unsigned int num1 = 9;  // Binary: 1001
    unsigned int num2 = 22; // Binary: 10110

    unsigned int reversed1 = reverseBits(num1);
    unsigned int reversed2 = reverseBits(num2);

    cout << "Original: " << bitset<8>(num1) 
         << ", Reversed: " << bitset<8>(reversed1) << endl;

    cout << "Original: " << bitset<8>(num2) 
         << ", Reversed: " << bitset<8>(reversed2) << endl;

    return 0;
}
