#include<iostream>
using namespace std;
int main(){
	int n;
	//cout<<"Enter the number :";
	//cin>>n;
	int arr[3][3];
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			cin>>arr[i][j];
		}
	}
	int countone =0;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			if(arr[i][j]==0)
			{
				countone++;
			}
		}
		
	}
	int countzero =0;
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			if(arr[i][j]==0)
			{
				countzero++;
			}
		}
		
	}
	cout<<"number of one in array are "<<countone<<'\n';
	cout<<"number of zero in array are "<<countzero<<'\n';
	return 0;
}
