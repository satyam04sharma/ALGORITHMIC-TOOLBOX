#include <iostream>
#include <string>
using namespace std;
using std::string;

int edit_distance(const string &str1, const string &str2) {
  int n=str1.length();
  int m=str2.length();
  int dp[n+1][m+1];
  for(int i=-1;i<n;i++)
  {
  	dp[i][-1]=i+1;
  }
  for(int j=-1;j<m;j++)
	{
  		dp[-1][j]=j+1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(str1[i]==str2[j])
			{
				dp[i][j]=dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
			}
		}
	}
	/*for(int i=-1;i<n;i++)
  {
  	for(int j=-1;j<m;j++)
	{
  		cout<<dp[i][j]<<" ";
	}
	cout<<endl;
  }*/
  //write your code here
  return dp[n-1][m-1];
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}
