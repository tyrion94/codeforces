#include<iostream>
using namespace std;
int memory[5000010];
//long long int last;
int main()
{
	long long int x1,no_of_games,x2,x3;
	cin >> no_of_games;
	for(x1=0;x1<=5000000;x1++)
		memory[x1]=0;
	memory[1]=0;memory[2]=1;memory[3]=1;memory[4]=2;memory[5]=1;memory[6]=2;memory[8]=3;memory[7]=1;
	//last=8;
	for(x3=0;x3<no_of_games;x3++)
	{
		long long int a,b,temp;
		cin >> a >> b;
		x1=b;
		for(x2=b+1;x2<=a;x2++)
		{
			x1=x2;
			while(x1!=1)
			{
				temp=2;
				while(x1%temp!=0)
					temp++;
				if(memory[x2/temp]!=0|| x2/temp==1)
				{
					memory[x2]=memory[x2/temp]+1;
					x1=1;
				}
				else
				{
					memory[x2]++;
					x1=x1/temp;

				}
				

			}

		}
		temp=0;
		for(x2=b+1;x2<=a;x2++)
			temp=temp+memory[x2];
		cout << temp << endl;
	}
		
	return 0;
}
