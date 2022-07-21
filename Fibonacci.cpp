#include "bits/stdc++.h"
using namespace std;

#define ss second
#define ff first
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define setBits(x) builtin_popcount(x)
#define vii vector<pii>
#define vi vector<int>
#define vvi vector<vi>

const int N=1e3+10, MOD= 1e9+7;
int dp[N];

int fib(int n){
    if(n==0 || n==1)
      return n;
    if(dp[n] != -1)
      return dp[n];
dp[n]=fib(n-1)+fib(n-2);
      return dp[n];

}

signed main(){
int n;
cin>>n;

rep(i,0,N){
    dp[i]=-1;
}

cout<<fib(n)<<endl;

return 0;

}
