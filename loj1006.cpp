#include<bits/stdc++.h>
using namespace std;
int dp[10001];

int a, b, c, d, e, f;
int fn( int n ) {
    if(dp[n] != -1)return dp[n];
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    dp[n] =  ( (fn(n-1)% 10000007) + (fn(n-2)% 10000007) + (fn(n-3)% 10000007) + (fn(n-4)% 10000007) + (fn(n-5)% 10000007) + (fn(n-6)% 10000007) ) % 10000007;
    return dp[n];
}

int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        memset(dp,-1,sizeof dp);
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        dp[0] = a;dp[1] = b;dp[2] = c;dp[3] = d;dp[4] = e;dp[5] = f;
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
