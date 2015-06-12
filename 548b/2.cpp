#include<iostream>
using namespace std;
int maxrow;
int main()
{
	int n,m,q;
	cin >> n >> m >> q;
	int a[502][502];
	int i,j,k,max,count,flag;
	max=0;count=0;flag=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
			cin >> a[i][j];
	}
	int x1;
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=m;j++)
		{
			if(a[i][j]==1)
			{
				count++;
				if(count > max)
				{
					max=count;
					maxrow=i;
				}
			}
			else
			{
				count=0;
			}
		
		}
	}
	for(x1=0;x1<q;x1++)
	{
		int a1,a2;
		cin >> a1 >> a2;
		if(a[a1][a2]==0)
			a[a1][a2]=1;
		else
			a[a1][a2]=0;
		if(a1!=maxrow)
		{
			int count2,max2;
			count2=0;max2=0;
			for(j=1;j<=m;j++)
			{
				if(a[a1][j]==1)
				{
					count2++;
					if(count2 > max2)
						max2=count2;
				}
				else
				{
					count2=0;
				}
			}
			if(max2 > max)
			{
				maxrow=a1;
				max=max2;
				cout << max2 << endl;
			}
			else
				cout << max << endl;
		}
		else
		{
			max=0;
			for(i=1;i<=n;i++)
			{
				count=0;
				for(j=1;j<=m;j++)
				{
					if(a[i][j]==1)
					{
						count++;
						if(count > max)
						{
							max=count;
							maxrow=i;
						}
					}
					else
					{
						count=0;
					}
			//cout << max << endl;
				}
			}
			cout << max << endl;
		}
	}
	return 0;
}
