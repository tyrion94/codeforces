#include<iostream>
using namespace std;
int main()
{
	int y;
	cin >> y;
	int a[4];
	int i,x;
	x=y+1;
	for(i=0;i<4;i++)
	{
		a[i]=x%10;
		x=x/10;
	}
	int count=0;
	int j,k,f0,f1,f2;
	f0=0;f1=0;f2=0;
	while(count<6)
	{
		count=0;f0=0;f1=0;f2=0;
		for(i=0;i<3;i++)
		{
			for(j=i+1;j<4;j++)
			{
				if(a[i]!=a[j])
					count++;
			}
		}
		if(count==6)
			break;
		else
		{
			if(a[0]<9)
			{
				f0=0;
				a[0]++;
			}
			else
			{
				a[0]=0;
				f0=1;
			}
			if(f0==1)
			{
				if(a[1]<9)
				{
					f1=0;
					a[1]++;
				}
				else
				{
					a[1]=0;
					f1=1;
				}
			}
			if(f1==1)
			{
				if(a[2]<9)
				{
					f2=0;
					a[2]++;
				}
				else
				{
					a[2]=0;
					f2=1;
				}
			}
			if(f2==1)
				a[3]++;
		}
		
	}
	cout << a[3] << a[2] << a[1] << a[0] << endl;
	return 0;
}
