#include<iostream>
using namespace std;
int main()
{
	int n,flag;
	cin >> n;
	flag=0;
	if(n%4==0||n%7==0||n%47==0||n%74==0||n%447==0||n%474==0||n%477==0||n%44==0||n%77==0||n%444==0||n%744==0||n%747==0||n%774==0||n%777==0)

		flag=1;
	if(flag==1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;

}

