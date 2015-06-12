#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i,j,k;
	j=4;
	int q[1000000];
	int temp;
	q[0]=1;
	q[1]=2;
	q[2]=3;
	q[3]=4;
	q[4]=5;
	for(i=0;i<n-1;i++)
	{
		temp=q[0];
		for(k=0;k<j;k++)
			q[k]=q[k+1];
		q[j]=temp;
		q[j+1]=temp;
		j++;
	}
	if(q[0]==1)
		cout << "Sheldon";
	else if(q[0]==2)
		cout << "Leonard";
	else if(q[0]==3)
		cout << "Penny";
	else if(q[0]==4)
		cout << "Rajesh";
	else
		cout << "Howard";
	cout << endl;
	return 0;
}
