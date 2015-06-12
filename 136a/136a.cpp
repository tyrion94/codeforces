#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[100],b[100];
	int i,j,k;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		b[a[i]-1]=i+1;
	}
	for(i=0;i<n-1;i++)
		cout << b[i] << " " ;
	cout << b[n-1] << endl;
	return 0;
}
