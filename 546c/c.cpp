#include<iostream>
using namespace std;
#include<queue>
int main()
{
	int n,k1,k2,i,temp1,temp2;
	queue <int> p1;
	queue <int> p2;
	cin >> n;
	cin >> k1;
	for(i=0;i<k1;i++)
	{
		cin >> temp1;
		p1.push(temp1);
	}
	cin >> k2;
	for(i=0;i<k2;i++)
	{
		cin >> temp1;
		p2.push(temp1);
	}
	int count=0;
	int flag,t1;
	t1=1<<20;
	flag=0;
	while(k1!=0&&k2!=0)
	{
		if(p1.front()>p2.front())
		{
			temp1=p1.front();
			p1.pop();
			temp2=p2.front();
			p2.pop();
			p1.push(temp2);
			p1.push(temp1);
			count++;
			k1++;
			k2--;
		}
		else
		{
			temp1=p1.front();
			p1.pop();
			temp2=p2.front();
			p2.pop();
			p2.push(temp1);
			p2.push(temp2);
			count++;
			k1--;
			k2++;
		}
		if(count>t1)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout << "-1" << endl;
	else
	{
		cout << count;
		if(k1==0)
			cout << " 2" << endl;
		else
			cout << " 1" << endl;
	}


	return 0;
}
