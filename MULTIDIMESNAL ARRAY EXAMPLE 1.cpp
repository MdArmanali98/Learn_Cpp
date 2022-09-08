#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[2][2][3];
	//cout<<"Enter value : ";
	for(int i=0;i<=1;++i)
	{
		for(int j=0;j<=1;++j)
		{
			for(int k=0;k<=2;++k)
			{
				arr[i][j][k];
			}
		}
	}
	int countzero=0;
	for(int i=0;i<=1;++i)
	{
		for(int j=0;j<=1;++j)
		{
			for(int k=0;k<=2;++k)
			{
				if(arr[i][j][k]==0)
				{
					countzero++;
				}
			}
		}
	}
	int countone=1;
	for(int i=0;i<=1;++i)
	{
		for(int j=0;j<=1;++j)
		{
			for(int k=0;k<=2;++k)
			{
				if(arr[i][j][k]==1)
				{
					countone++;
				}
			}
		}
	}
	int countTwo=2;
	for(int i=0;i<=1;++i)
	{
		for(int j=0;j<=1;++j)
		{
			for(int k=0;k<=2;++k)
			{
				if(arr[i][j][k]==2)
				{
					countTwo++;
				}
			}
		}
	}
	int countThree=3;
	for(int i=0;i<=1;++i)
	{
		for(int j=0;j<=1;++j)
		{
			for(int k=0;k<=2;++k)
			{
				if(arr[i][j][k]==3)
				{
					countThree++;
				}
			}
		}
	}
	int countfour=4;
	for(int i=0;i<=1;++i)
	{
		for(int j=0;j<=1;++j)
		{
			for(int k=0;k<=2;++k)
			{
				if(arr[i][j][k]==4)
				{
					countfour++;
				}
			}
		}
	}
	int countfive=5;
	for(int i=0;i<=1;++i)
	{
		for(int j=0;j<=1;++j)
		{
			for(int k=0;k<=2;++k)
			{
				if(arr[i][j][k]==5)
				{
					countfive++;
				}
			}
		}
	}
	int countsix=6;
	for(int i=0;i<=1;++i)
	{
		for(int j=0;j<=1;++j)
		{
			for(int k=0;k<=2;++k)
			{
				if(arr[i][j][k]==6)
				{
					countsix++;
				}
			}
		}
	}
	cout<<"number of zero in array are : "<<countzero<<'\n';
	cout<<"number of one in array are : "<<countone<<'\n';
	cout<<"number of two in array are  : "<<countTwo<<'\n';
	cout<<"number of three in array are : "<<countThree<<'\n';
	cout<<"number of four in array are : "<<countfour<<'\n';
	cout<<"number of five in array are : "<<countfive<<'\n';
	cout<<"number of six in array are : " <<countsix<<'\n';
	return 0;
}
