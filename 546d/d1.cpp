#include<iostream>
using namespace std;
long long int fact(long long int a)
{
	if(a==0)
		return 1;
	else
	{
		long long int x;
		x=a*fact(a-1);
		return x;
	}
}
long long int mul(long long int a,long long int b)
{
	if(a==b)
		return 1;
	else
	{
		long long int x;
		x=a*mul(a-1,b);
		return x;
	}
}
int main()
{
	long long int x1,testcases;
	cin >> testcases;
	for(x1=0;x1<testcases;x1++)
	{
		long long int a,b,multiply;
		cin >> a >> b;
		multiply=mul(a,b);
		long long int count,i,savei;
		i=2;count=0;
	//	cout << multiply << endl;
		while(multiply!=1)
		{
			if(multiply%i==0)
				{
					count++;
					multiply=multiply/i;
				}
			else
			
				i++;
		}
		cout << count << endl;
	}
	return 0;
}
