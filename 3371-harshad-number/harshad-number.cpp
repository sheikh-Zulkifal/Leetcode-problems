class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int orignalX = x;
        while (x > 0) {
            sum += x % 10;
            x = x / 10;
        }
        if (orignalX % sum == 0) {
            return sum;
        }
        return -1;
    }
};