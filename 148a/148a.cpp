#include<iostream>
using namespace std;
int main()
{
	int a[4];
	int d,i,j,t;
	for(i=0;i<4;i++)
		cin >> a[i];
	cin >> d;
//	cout << a[0] << d << endl;
	for(i=1;i<3;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	//sorted klmn
	int count[4],temp;
	count[0]=d/a[0];
	temp=a[1];count[1]=0;
	while(temp<=d)
	{
		if(temp%a[0]!=0&&a[1]!=a[0])
		{
			count[1]++;
		}
		temp=temp+a[1];
	}
	temp=a[2];count[2]=0;
	while(temp<=d)
	{
		if(temp%a[0]!=0&&temp%a[1]!=0&&a[2]!=a[1])
		{
			count[2]++;
		}
		temp=temp+a[2];
	}
	temp=a[3];count[3]=0;
	while(temp<=d)
	{
		if(temp%a[0]!=0&&temp%a[1]!=0&&temp%a[2]!=0&&a[3]!=a[2])
		{
			count[3]++;
		}
		temp=temp+a[3];
	}

	int fin;
	fin=count[0]+count[1]+count[2]+count[3];
	cout << fin << endl;
	return 0;
}
