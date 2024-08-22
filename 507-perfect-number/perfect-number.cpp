class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1)
            return false;
        
        int sum = 1;
        for (int i = 2; i * i <= num; i++) { // Corrected loop condition
            if (num % i == 0) {
                sum += i;
                if (i != num / i) { // Avoid adding the square root twice
                    sum += num / i;
                }
            }
        }
        return num == sum;
    }
};
