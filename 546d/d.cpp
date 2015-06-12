#include<iostream>
using namespace std;
int memory[5000010];
int main()
{
	long long int x1,no_of_games;
	cin >> no_of_games;
	memory[1]=0;memory[2]=1;memory[3]=2;memory[4]=4;memory[5]=5;memory[6]=7;memory[8]=10;
	for(x1=0;x1<no_of_games;x1++)
	{
		long long int a,b,count;
		cin >> a >> b;
		long long int x=2;count=0;
		long long int i,j,k;
		if(memory[b]!=0&&memory[a]!=0)
			cout << memory[a] - memory[b] << endl;
		else
		{	
			for(i=b+1;i<a+1;i++)
			{
				x=2;
				j=i;
				while(j!=1)
				{
					if(j%x==0)
					{
						count++;
						j=j/x;
					}
					else
						x++;
				}
			}
			if(memory[b]!=0)
				memory[a]=memory[b]+count;
			cout << count << endl;
		}

	}
	return 0;
}
