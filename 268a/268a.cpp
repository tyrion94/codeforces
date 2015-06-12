#include<iostream>
using namespace std;
int main()
{
	int n,i,j,count;
	cin >> n;
	int a[70];
	for(i=0;i<2*n;i++)
		cin >> a[i];
	count=0;
	for(i=0;i<2*n;i=i+2)
	{
		for(j=1;j<2*n;j=j+2)
		{
			if(a[i]==a[j])
				count++;
		}
	}
	cout << count << endl;
	return 0;
}
