//approach 1
class Solution {
public:
    int fib(int n) {
        if(n<2)return n;
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-2]+dp[i-1];
        }
        return dp[n];        
    }
};

//approach 2

class Solution {
public:
    int fib(int n) {
        if(n<2)return n;
        int a=1,b=0,c=0;
        for(int i=1;i<n;i++){
            c=a+b;
            b=a;
            a=c;
        }
        return c;
    }
};
