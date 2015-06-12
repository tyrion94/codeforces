#include<iostream>
#include<string>
using namespace std;
int length(char a[])
{
	int count=0;
	while(a[count]!='\0')
		count++;
	return count;
}
void ctos(char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]>='A' && a[i]<='Z')
			a[i]=a[i]+32;
		i++;
	}
//	return a;
}
int main ()
{
	char q[100];
	int c;
	cin >> q;
	//c=length(q);
	//cout << c <<endl;
	ctos(q);
`
	return 0;
}
