#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int i,n,flag;
	flag=0;
	cin >> a;
	n=0;
	while(a[n]!='\0')
	{
		if(a[n]=='H' || a[n]=='Q' || a[n]=='9')
			flag=1;
		n++;
	}
	if(flag==1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
