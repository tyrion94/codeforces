#include<iostream>
using namespace std;
int main()
{
	char a[101];
	cin >> a;
	int i,j,k,len,tempno;
	len=0;
	while(a[len]!='\0')
		len++;
	//tempno=(a[1]-'0')*10+(a[0]-'0');
	//cout << tempno << endl;
	if(len==1)
	{
		if(a[0]=='8' || a[0]=='0')
		{
			cout << "YES\n" << a[0] << endl;
		}
		else
			cout << "NO\n";
	}
	else if(len==2)
	{
		tempno=(a[0]-'0')*10+(a[1]-'0');
		if(tempno%8==0)
			cout << "YES\n" << tempno << endl;
		else
		{
			if(a[1]=='0'||a[0]=='0')
				cout << "YES\n0\n";
			else
				cout << "NO\n";
		}
	}
	else
	{
		tempno=(a[len-3]-'0')*100+(a[len-2]-'0')*10+(a[len-1]-'0');
	}
	return 0;
}
