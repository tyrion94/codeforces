#include<iostream>
using namespace std;
int main()
{
	int n,m,count;
	count=0;
	cin >> n >> m;
	while(n!=0)
	{
		count++;
		n--;
		if(count%m==0)
			n++;
	}
	cout << count << endl;
	return 0;
}
