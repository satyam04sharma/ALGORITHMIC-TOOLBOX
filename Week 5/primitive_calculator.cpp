#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a(n+1,INT_MAX);
	vector< vector<int> >list (n+1);
	a[1]=0;
	list[1].push_back(1);
	for(int i=2;i<=n;i++)
	{
		if(i%3==0)
		{
				if(a[i/3]<a[i])
				{
					a[i]=a[i/3]+1;
					list[i]=list[i/3];
					list[i].push_back(i);
				}
		}
		if(i%2==0)
		{
			if(a[i/2]<a[i])
			{
				a[i]=a[i/2]+1;
				list[i]=list[i/2];
				list[i].push_back(i);
			}
		}
		if(a[i-1]<a[i])
		{
			a[i]=a[i-1]+1;
			list[i]=list[i-1];
			list[i].push_back(i);
		}
	}
	cout<<a[n]<<endl;
	for(vector<int>::iterator i=list[n].begin();i!=list[n].end();i++)
	cout<<*i<<" ";
	cout<<endl;
}
