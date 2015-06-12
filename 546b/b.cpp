#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j;
	int a[3000];
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	int max;
	sort(a,a+n);
	max=0;
	/*for(i=0;i<n;i++)
	{
		cout << a[i] << " ";

	}*/
	
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]==a[i])
		{
			a[i+1]=a[i+1]+1;
			max++;
		}
		else if(a[i+1]<a[i])
		{
			max=max+a[i]-a[i+1]+1;
			a[i+1]=a[i]+1;
		}
	}
        /*	for(i=0;i<n;i++)
	{
		cout << a[i] << " ";

	}
	cout << endl;*/

	cout << max << endl;
	

}
