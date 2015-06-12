#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i,j,k;
	string temp;
	queue <string> name;
	name.push("Sheldon");
	name.push("Leonard");
	name.push("Penny");
	name.push("Rajesh");
	name.push("Howard");
	for(i=1;i<n;i++)
	{
		temp=name.front();
		name.pop();
		name.push(temp);
		name.push(temp);
	}
	cout << name.front() << endl;
	return 0;
}
