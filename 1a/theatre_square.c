#include<stdio.h>
int main()
{
	unsigned long long int m,n,a,count1,count2,tm,tn,ans;
	scanf("%llu%llu%llu",&m,&n,&a);
	count1=(m+a-1)/a;count2=(n+a-1)/a;
	ans=count1*count2;
	printf("%llu\n",ans);
	return 0;

}
