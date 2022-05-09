//approach1
class Solution {
public:
    int tribonacci(int n) {
        if(n<2)return n;
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};

//optimisation store 3 in a,b,c and d for total
class Solution {
public:
    int tribonacci(int n) {
        if(n<2)return n;
        if(n==2)return 1;
        int a=1,b=1,c=0,d=0;
        for(int i=2;i<n;i++){
            d=a+b+c;
            c=b;
            b=a;
            a=d;
        }
        return d;
            }
};

//approach 3 same as above
class Solution {
public:
    int tribonacci(int n) {
        int dp[3]={0,1,1};
        for(int i=3;i<=n;i++)
            dp[i%3]+=dp[(i+1)%3]+dp[(i+2)%3];
        
        return dp[n%3];
    }
};
