#include<iostream>
using namespace std;
int main()
{
	int n;
	int i,pf,pl,f,l;
	cin >> n;
	int a[110];
	for(i=0;i<n;i++)
		cin >> a[i];
	pf=0;pl=0;f=a[0];l=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<=l)
		{
			l=a[i];
			pl=i;
		}
		if(a[i]>f)
		{
			f=a[i];
			pf=i;
		}
	}
	//cout << f << l << endl;
	int ans=pf+n-1-pl;
	if(pf<pl)
		cout << ans << endl;
	else
		cout << ans-1 << endl;
	return 0;
}
