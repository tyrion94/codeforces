#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b){if(a%b==0)return b;else gcd(b,a%b);}
int pown(int a,int b,int c){a=a%c;int result=1;while(b>0){if(b&1)result=(result*a)%c;a=(a*a)%c;b>>=1;}return result;}
int max(int a,int b){if(a>=b)return a;else return b;}
int min(int a,int b){if(a>=b)return b;else return a;}
///////////////////////////main code////////////////////////////////////////
int main()
{
	char s[100002];
	int i,j,k,l,flaga,flagb,count1,count2,count;
	cin >> s;
	count1=0;count2=0;count=0;
	l=0;flaga=0;flagb=0;
	while(s[l]!='\0')
		l++;
	if(l<4)
		cout << "NO\n";
	else
	{
		for(i=0;i<l-1;i++)
		{
			//cout << i << endl;
			if(s[i]=='A'&&s[i+1]=='B')
			{
				flaga=1;
				count1++;
				if(s[i+2]=='A')
					count++;
				
			}
			else if(s[i]=='B'&&s[i+1]=='A')
			{
				flagb=1;
				count2++;
				if(s[i+2]=='B')
					count++;
				
			}
			
		}
		//cout << flaga << flagb << endl;
		int fa,fb;fa=0;fb=0;
		if(count1==count)
			fa=1;
		if(count2==count)
			fb=1;
		int fin;
		fin=fa&fb;
		if(flaga==1&&flagb==1&&fin==0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
