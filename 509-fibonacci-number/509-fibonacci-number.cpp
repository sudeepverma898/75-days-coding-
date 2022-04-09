class Solution {
public:
    int fib(int n) {
        if(n==0)
            return n;
        int prev1=0;
        int prev2=1;
        int curr=0;
        for(int i=2; i<n+1; i++)
        {
            curr=prev1+prev2;
            prev1=prev2;
            prev2=curr;
        }
        return prev2;
    }
};