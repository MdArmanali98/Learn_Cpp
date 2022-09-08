#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[3][3][3];
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			for(int k=0;k<3;++k)
			{
				cin>>arr[i][j][k];
			}
		}
	}
	int countone=1;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			for(int k=0;k<3;++k)
			{
				if(arr[i][j][k]==1)
				{
					countone++;
				}
			}
		}
	}
	int countTwo=2;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			for(int k=0;k<3;++k)
			{
				if(arr[i][j][k]==2)
				{
					countone++;
				}
			}
		}
	}
	
	int countThree=3;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			for(int k=0;k<3;++k)
			{
				if(arr[i][j][k]==3)
				{
					countone++;
				}
			}
		}
	}
	int countfour=4;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			for(int k=0;k<3;++k)
			{
				if(arr[i][j][k]==4)
				{
					countone++;
				}
			}
		}
	}
	int countfive=5;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			for(int k=0;k<3;++k)
			{
				if(arr[i][j][k]==5)
				{
					countone++;
				}
			}
		}
	}
	
	cout<<"number of one in array are "<<countone<<'\n';
	cout<<"number of two in array are "<<countTwo<<'\n';
	
	cout<<"number of three in array are "<<countThree<<'\n';
	cout<<"number of four in array are "<<countfour<<'\n';
	
	cout<<"number of five in array are "<<countfive<<'\n';
	
	return 0;
	
}
