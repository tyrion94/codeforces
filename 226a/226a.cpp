#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin >> n;
	char a[50];
	for(i=0;i<n;i++)
		cin >> a[i];
	int count=0;
	i=0;j=i+1;
	while(i<n-1)
	{
		if(a[i]==a[j])
		{
			count++;
			j++;
		}
		else
		{
			i=j;
			j=j+1;
		}

	}
	cout << count << endl;
	return 0;
}
