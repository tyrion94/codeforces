#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,l,r,x;
	cin >> n >> l >> r >> x;
	int a[20];
	int i,j,k,one,t;
	for(i=0;i<n;i++)
		cin >> a[i];
	k=pow(2,n);
	k=k-1;
	int ans,tempans;ans=0;tempans=0;
//	cout<< k << endl;
	for(i=1;i<=k;i++)
	{
		one=1;
		tempans=a[i];
		for(j=0;j<n;j++)
		{
			one=one<<j;
			//cout << one << "check" << i << endl; 
			t=one&i;
			if(t>0)
			{
				tempans=tempans+a[j];
				if(tempans>=l&&tempans<=r)
					ans++;
			}
			one=1;
		}
		
	}
	cout << ans << endl;
	return 0;
}
