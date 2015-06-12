#include<iostream>
using namespace std;
int main()
{
	char s[1001],test[1001];
	int i,j,k,l,flag,g,h,b,c,d,e,f;
	cin >> s;
	cin >> k;
	l=0;
	while(s[l]!='\0')
		l++;
	if(l%k!=0)
		cout << "NO\n";
	else
	{
		flag=0;
		j=l/k;
	//	cout << j << endl;
		i=0;h=j-1;
		while(i<l&&h<l)
		{
			d=i;e=h;
			for(f=d;f<d+j/2;f++)
			{

				if(s[f]!=s[e])
				{
					flag=1;
						//cout << flag << endl;
					break;
				}
				e--;
					//cout << flag << endl;

			}
			if(flag==1)
				break;
			i=i+j;h=h+j;
		}
		if(flag==1)
			cout << "NO\n";
		else
			cout << "YES\n";
		
	}
	return 0;
}
