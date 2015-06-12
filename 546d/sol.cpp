#include<iostream>
using namespace std;
int memory[5000010];
int main()
{
	long long int x1,no_of_games,x2,x3;
	cin >> no_of_games;
	memory[1]=0;memory[2]=1;memory[3]=2;memory[4]=4;memory[5]=5;memory[6]=7;memory[8]=10;
	for(x1=9;x1<=5000000;x1++)
	{
		x2=2;
		while(x1%x2!=0)
			x2++;
		memory[x1]=memory[x1-1]+memory[x1/x2]+1;
	}
	for(x1=0;x1<1000;x1++)
		cout << memory[x1] << endl;
		
	return 0;
}
