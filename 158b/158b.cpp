#include<iostream>
#include<string>
using namespace std;
int main()
{
	int no_groups;
	cin >> no_groups;
	int i,j;int std[100000];
	for(i=0;i<no_groups;i++)
		cin >> std[i];
	int count=1;
	int check=0;
	int taxi[100000];
	for(i=0;i<no_groups;i++)
		taxi[i]=4;
	for(i=0;i<no_groups;i++)
	{
		for(j=0;j<count;j++)
		{
			if(taxi[j]>=std[i])
			{
				taxi[j]=4-std[i];
				if(taxi[j]!=0)
				{
					check=1;
				}
				break;
			}
			else
				check=0;
		}
		if(check==0)
		{
			count++;
			taxi[count-1]=4-std[i];
		}

	}
	cout << count << endl;
	return 0;
}
