//train seet 

#include<iostream>
using namespace std;
int main()
{
	 int s;
	 cout<<"enter the number :";
	 cin>>s;
	if(s>0&&s<=24)
	 
	 
	
	if(s%8==0)
	{
		cout<<"is a upper side\n";
		
	}
	else if(s%8==7)
	{
		cout<<" is a side lower \n";
	}
	 else if(s%8==3||s%8==6)
	{
		cout<<"upper\n";
	}
	else if(s%8==2||s%8==5)
	{
		cout<<"is a middle\n";
	}
	else if (s%8==1||s%8==4)
	
		cout<<"is a lower\n";
	
	else 
		cout<<endl;
		else
		{
			cout<<"invalid seat";
		}
	
	return 0;
	
}
	 
