#include<iostream>
using namespace std;
int main()
{
	char s[109],r[109];
	int l1,l2;
	cin >> s >> r;
	l1=0;
	l2=0;
	while(s[l1]!='\0')
		l1++;
	while(r[l2]!='\0')
		l2++;
	int i,flag;flag=0;
	if(l1!=l2)
	{
	//	cout << l1 << l2 << endl;
		//cout << "1" << endl;
		cout << "NO" << endl;
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(s[i]!=r[l1-1-i])
			{
				flag=1;break;
			}
		}
		if(flag==1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
