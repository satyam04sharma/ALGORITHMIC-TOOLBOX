#include <bits/stdc++.h>
using namespace std;
int get_change(int m) {
  int dp[m];
  int x,y,z;
  dp[0]=0;
  dp[1]=1;
  for(int i=0;i<=m;i++)
  dp[i]=i;
      for(int i=2;i<=m;i++)
      {
          if((i-1)>=0)
          {
              dp[i]=min(dp[i],dp[i-1]+1);
          }
          if((i-3)>=0)
          {
                dp[i]=min(dp[i],dp[i-3]+1);          }
          if((i-4)>=0)
          {
                dp[i]=min(dp[i],dp[i-4]+1);          }
      }
  //write your code here
  return dp[m];
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
