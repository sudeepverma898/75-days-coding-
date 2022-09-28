class Solution {
public:
    int reverse(int x) {
        int remainder, sum = 0;
        while( x ){
            remainder = x % 10;
            if( (sum > INT_MAX / 10) || (sum < INT_MIN / 10 ) )
                return 0;
            sum *= 10;
            sum += remainder;
            x /= 10;
        }
        return sum;
    }
};