class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            // Calculate the carry
            int carry = (unsigned int)(a & b) << 1;
            // Sum without carry
            a = a ^ b;
            // Assign the carry to b
            b = carry;
        }
        return a;
    }
};
