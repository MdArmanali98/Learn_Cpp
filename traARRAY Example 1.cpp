#include<iostream>
using namespace std;
int main()
{
	int arr[20];
	int n;
	cout<<"enter the size of array : ";
	cin>>n;
	
	cout<<"enter element"<<endl;
	
	for(int i=0;i<n;++i)
	{
cin>>arr[i];
	}
	cout<<"the element of the array are : ";
	for(int i=0;i<n;++i)
	{
		cout<< " \t"<<arr[i];
	}
	return 0;
	
}
