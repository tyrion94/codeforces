#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int gcd(int a,int b){if(a%b==0)return b;else gcd(b,a%b);}
int pown(int a,int b,int c){a=a%c;int result=1;while(b>0){if(b&1)result=(result*a)%c;a=(a*a)%c;b>>=1;}return result;}
int max(int a,int b){if(a>=b)return a;else return b;}
int min(int a,int b){if(a>=b)return b;else return a;}
///////////////////////////main code////////////////////////////////////////
int main()
{
	long long int i,j,k,n,l,r,x,tempans,temp,ans;
	cin >> n >> l >> r >> x;
	long long int a[1000000];
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	ans=0;
	for(i=0;i<n-1;i++)
	{
		temp=a[i];tempans=1;
		for(j=i+1;j<n;j++)
		{
			temp=temp+a[j];
			if(temp>=l&&temp<=r)
			{
				tempans=tempans*2;
			}
			if(temp>r)
				break;
		}
		tempans--;
		ans=ans+tempans;
	}
	//cout << minindex << maxindex << endl;

	cout << ans << endl;
	return 0;
}
