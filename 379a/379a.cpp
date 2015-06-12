#include<iostream>
using namespace std;
int main()
{
	int a,b,count;
	count=0;
	cin >> a >> b;
	while(a>=b)
	{
		count=count+b;
		a=a-b+1;
	}
	count=count+a;
	cout << count << endl;
	return 0;
}
