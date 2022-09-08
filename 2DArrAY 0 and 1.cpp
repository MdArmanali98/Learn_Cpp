#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the element :";
	cin>>n;
	
	int arr[3][3];
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<3;++j)
		{
			cin>>arr[i][j];
		}
		int countone=1;
		for(int i=0;i<3;++i)
		{
			for(int j=0;j<3;++j)
			{
				if(arr[i][j]==1)
				{
					countone++;
				}
				/*if else(arr[i][j]==1)
				{
					countone++;
				}*/
				cout<<"number of one first elements : "<<endl;
				cout<<"number of one secound element :";
			}
			
		}
	}
	return 0;
}


