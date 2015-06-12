#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b){if(a%b==0)return b;else gcd(b,a%b);}
int pown(int a,int b,int c){a=a%c;int result=1;while(b>0){if(b&1)result=(result*a)%c;a=(a*a)%c;b>>=1;}return result;}
int max(int a,int b){if(a>=b)return a;else return b;}
int min(int a,int b){if(a>=b)return b;else return a;}
///////////////////////////main code////////////////////////////////////////
int check_face(char f,char a,char c,char e)
{
	int cf,ca,cc,ce;cf=0;ca=0;cc=0;ce=0;
	if(f=='f'||a=='f'||c=='f'||e=='f')
		cf=1;
	if(f=='a'||a=='a'||c=='a'||e=='a')
		ca=1;
	if(f=='c'||a=='c'||c=='c'||e=='c')
		cc=1;
	if(f=='e'||a=='e'||c=='e'||e=='e')
		ce=1;
	if(cf==1&&ca==1&&cc==1&&ce==1)
		return 1;
	else
		return 0;
}
int main()
{
	int m,n;
	cin >> n >> m;
	char a[51][51];
	int i,j,flag1,count,flag2,flag3,flag4;
	flag1=0;count=0;flag2=0;flag3=0;flag4=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cin >> a[i][j];
	}
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cout << a[i][j];
		cout << endl;
	}*/
	for(i=0;i<n;i=i+2)
	{
		for(j=0;j<m;j=j+2)
		{
			flag1=0;flag2=0;flag3=0;flag4=0;
			if(i-1>=0&&j-1>=0)
			{
				flag1=check_face(a[i][j],a[i-1][j],a[i][j-1],a[i-1][j-1]);
				count=count+flag1;
			}
			if(i-1>=0&&j+1<m)
			{
				flag2=check_face(a[i][j],a[i-1][j],a[i][j+1],a[i-1][j+1]);
				count=count+flag2;
			}
			if(i+1<n&&j-1>=0)
			{
				flag3=check_face(a[i][j],a[i+1][j],a[i][j-1],a[i+1][j-1]);
				count=count+flag3;
			}
			if(i+1<n&&j+1<m)
			{
				flag4=check_face(a[i][j],a[i+1][j],a[i][j+1],a[i+1][j+1]);
				count=count+flag4;
			}
		}
	}
	cout << count << endl;
	return 0;
}
