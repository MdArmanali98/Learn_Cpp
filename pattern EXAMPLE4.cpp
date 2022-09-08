#include<iostream>
using namespace std;
int main()
{
	int row,sp;
	cout<<"enter the no";
	cin>>row;

	for(int row=1;row<=5;++row)
	{
		for(int sp=1;sp<=row;++sp)
		{
			cout<<"  ";
			--row;
			
		}
		for(int dis=1;dis<row;++row)
		{
			cout<<" "<<row<<endl;
		}
		cout<<endl;
	
	}
	return 0;
}
