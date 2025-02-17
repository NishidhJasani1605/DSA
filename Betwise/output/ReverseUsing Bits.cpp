#include <iostream>
#include <bitset>
using namespace std;

unsigned int reverseBits(unsigned int num, int bit_size = 8) {
    unsigned int reversed_num = 0;

    for (int i = 0; i < bit_size; i++) {
        int last_bit = num & 1;  // Extract last bit
        reversed_num = (reversed_num << 1) | last_bit;  // Shift left and add last bit
        num >>= 1;  // Shift right to process next bit
    }

    return reversed_num;
}

int main() {
    unsigned int num1 = 0b1001;  // 9 in binary (4-bit)
    unsigned int num2 = 0b00010110;  // 22 in binary (8-bit)

    unsigned int reversed1 = reverseBits(num1, 4);
    unsigned int reversed2 = reverseBits(num2, 8);

    cout << "Original: " << bitset<4>(num1) 
              << ", Reversed: " << bitset<4>(reversed1) << endl;

    cout << "Original: " << bitset<8>(num2) 
              << ", Reversed: " << bitset<8>(reversed2) << endl;

    return 0;
}



