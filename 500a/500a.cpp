#include<iostream>
using namespace std;
int main()
{
	int n,t; 
	cin >> n >> t;
	int i,flag,count;
	int a[300000];
	flag=0;count=0;
	for(i=0;i<n-1;i++)
		cin >> a[i];
	for(i=0;i<n-1;)
	{
		if(count<t)
		{
			count=a[i]+i+1;
			i=count-1;
		}
		if(count==t)
		{
			flag=0;
			break;
		}
		if(count>t)
		{
			flag=1;
			break;
		}

	}
	if(flag==1)
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}
