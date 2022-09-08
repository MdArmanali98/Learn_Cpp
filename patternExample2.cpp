#include<iostream>
using namespace std;
int main()
{
	for(int lineNum=1;lineNum<=5;++lineNum)
	{
		for(int j=1;j<=lineNum;++j)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
