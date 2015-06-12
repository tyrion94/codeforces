#include<iostream>
using namespace std;
int main()
{
	int n,count,i;
	int p[100],q[100];
	count=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> p[i] >> q[i];
		if(q[i]-p[i]>=2)
			count++;
	}
	cout << count << endl;
	return 0;
}
