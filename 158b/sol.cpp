#include<iostream>
#include<string>
using namespace std;
int main()
{
	int gr,i;
	cin >> gr;
	int no[100000];
	int c1,c2,c3,c4;
	c1=0;c2=0;c3=0;c4=0;
	for(i=0;i<gr;i++)
	{
		cin >> no[i];
		if(no[i]==1)
			c1++;
		else if(no[i]==2)
			c2++;
		else if(no[i]==3)
			c3++;
		else
			c4++;
	}
//	cout << c1 << c2 << c3 << c4 << endl;
	int ans,temp;
	ans=c4;
	if(c3<=c1)
	{
		ans=ans+c3;
		c1=c1-c3;
	}
	else
	{
		ans=ans+c3;
		c1=0;
	}
	if(c2%2==0)
	{
		ans=ans+(c2/2);
		c2=0;
	}
	else
	{
		ans=ans+(c2/2);
		c2=1;
	}
	if(c2==0)
	{
		if(c1%4==0)
			ans=ans+(c1/4);
		else
			ans=ans+1+(c1/4);
	}
	else
	{
		if(c1<=2)
		{
			ans=ans+1;
		}
		else
		{
			ans=ans+1;
			c1=c1-2;
			if(c1%4==0)
				ans=ans+(c1/4);
			else
				ans=ans+1+(c1/4);
		}
	}
	cout << ans <<endl;
	return 0;
}
