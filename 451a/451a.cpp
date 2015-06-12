#include<iostream>
using namespace std;
int main()
{
	int hori,vertical,t;
	cin >> hori >> vertical;
	t=(hori>=vertical)? vertical : hori;
	if(t%2==0)
		cout << "Malvika\n";
	else
		cout << "Akshat\n";

	return 0;
}
