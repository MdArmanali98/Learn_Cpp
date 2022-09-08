#include<iostream>
using namespace std;
int main()
{
	char arr[5][5],count[26];
	for(int  i=0;i<26;++i)
	{
		count[i]={0};
	}
	for(char i='a';i<'z';++i)
	{
		cout<<count[i]<<' ';
	}
	for(int i=0;i<5;++i)
	{
		for(int j=0;j<5;++j)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<5;++i)
	{
		for(int j=0;j<5;++i)
		{
			if(arr[i][j]>='a'&&arr[i][j]=='z')
			{
				count[arr[i][j]]++;
			}
		}
	}
	for(int i=0;i<26;++i){
	
	cout<<"number of a in array are : "<<i<<count[i]<<'\n';
}
return 0;
}
