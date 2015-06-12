#include<iostream>
using namespace std;
int main()
{
	int x1,x2,h1,h2,y1,y2,m,c1,c2,a1,a2,flag,th1,th2,t,flag1,flag2,rc1,rc2,fc1,fc2;
	//t=1<<20;
	flag=0;flag1=0;flag2=0;
	c1=0;c2=0;
	cin >> m;
	cin >> h1 >> a1;
	cin >> x1 >> y1;
	cin >> h2 >> a2;
	cin >> x2 >> y2;
	th1=h1;th2=h2;
	while(1)
	{
		h1=((((x1%m)*(h1%m))%m)+(y1%m))%m;
		c1++;
		if(h1==a1)
		{
			flag1=1;
			rc1=c1;

		}
		if(h1==th1)
		{
			if(flag1==1)
			{
				fc1=c1;
			}
			break;
		}
	//	cout << c1 << endl;
	}
	while(1)
	{
		h2=((((x2%m)*(h2%m))%m)+(y2%m))%m;
		c2++;
		if(h2==a2)
		{
			flag2=1;
			rc2=c2;
		
		}
		if(h2 == th2)
		{
			if(flag2==1)
				fc2=c2;
			break;
		}

	}
	if(flag1==0 || flag2==0)
		cout << "-1\n";
	else
	{
		if(rc1==rc2)
			cout << rc1 << endl;
		else
		{
			int xx,xxx;xx=0;xxx=fc1*xx+rc1;
			while(xxx%fc2!=rc2)
			{
				xx++;
				xxx=fc1*xx+rc1;
			}
			cout << xxx << endl;
		}

	}
	return 0;
}
