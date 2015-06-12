#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[100000];
	int i,j,count,flag;
	count=1;flag=0;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	/*for(i=0;i<n;i++)
		cout << a[i] << endl;*/
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[i-1])
			flag=1;
		if(flag==1)
		{
			count++;
			flag=0;
		}

	}
	cout << count << endl;
	return 0;
}
