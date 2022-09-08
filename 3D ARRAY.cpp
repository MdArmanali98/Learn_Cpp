#include<iostream>
using namespace std;
int main()
{
	int arr[2][2][3];
	cout<<"Enter values into array :"<<endl;
	for(int i=0;i<=1;++i)
	{
		for(int j=0;j<=1;++j)
		{
			for(int k=0;k<=2;++k)
			{
				cin>>arr[i][j][k];
			}
		}
	}
	cout<<" ___"<<endl;
	for(int i=0;i<=1;++i)
	{
		for(int j=0;j<=1;++j)
		{
			for(int k=0;k<=2;++k)
			{
				cout<<arr[i][j][k]<<"   ";
				
			}
		}
		cout<<endl;
		
	}
	return 0;
}
