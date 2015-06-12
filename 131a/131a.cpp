#include<iostream>
#include<string>
using namespace std;
int len(char a[])
{
	int count=0;
	while(a[count]!='\0')
		count++;
	return count;
}
int countcapital(char a[])
{
	int i,l,count;
	l=len(a);count=0;
	for(i=0;i<l;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			count++;
		}
	}
	return count;
}
int main()
{
	char a[100000];
	cin >> a;
	int a1,a2,a3,i;
	a1=len(a);
	a2=countcapital(a);
	a3=a1-a2;
//	cout << a2 << endl;
	if(a3==0 || (a3==1 && a[0]>='a' && a[0]<='z'))
	{
		for(i=0;i<a1;i++)
		{
			if(a[i]>='a' && a[i]<='z')
				a[i]=a[i]-'a'+'A';
			else
				a[i]=a[i]+'a'-'A';
		}
	}
	cout << a << endl;
	return 0;
}
