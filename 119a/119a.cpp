#include<iostream>
using namespace std;
int hcf(int a,int b)
{
	if(a%b==0)
		return b;
	else
	{
		int x;
		x=a%b;
		hcf(b,x);
	}
}
int main()
{
	int a,b,n;
	cin >> a >> b >> n;
	int temp,flag,start;
	flag=0;start=0;
	while(n>0)
	{
		if(start==1)
		{
			temp=hcf(b,n);
			n=n-temp;
			if(n>0)
				flag=0;
			start=0;
		}
		else
		{
			temp=hcf(a,n);
			n=n-temp;
			if(n>0)
				flag=1;
			start=1;
		}
	}
	cout << flag << endl;
	return 0;
}
