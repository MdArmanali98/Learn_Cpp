/*#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=4;++i)
	{
		cout<<"*";
	}
	return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
		{
			cout<<"i = "<<i<<", "<<"j = "<<j<<endl;
		}
		cout<<endl;
	}
	return 0;
}
