#include<iostream>
#include<string>
void printstring(int a)
{
	if(a==0)
	std::	cout << "Sheldon";
	if(a==1)
	std::	cout << "Leonard";
	if(a==2)
	std::	cout << "Penny";
	if(a==3)
	std::	cout << "Rajesh";
	if(a==4)
	std::	cout << "Howard";
}
using namespace std;
int main()
{
		long long int n;
		cin >> n;
		long long int i,j,k,l;
		j=5;
		k=1;
		l=n;i=1;
		while(l-(j*i)>0)
		{
			l=l-(j*i);
			i=i*2;
			k++;
		}
	//	cout << l << " " << i << endl;
		long long int x1,x2,x3,x4;
		x1=l/i;
		if(l==x1*i)
			printstring(x1-1);
		else 
			printstring(x1);
		cout << endl;

	return 0;
}
