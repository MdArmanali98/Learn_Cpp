#include<iostream>
using namespace std;
int main()

{
	int  userInput;
	cout<<"enter the number  : ";
	cin>>userInput;
	
	for(int loop_1=1;  loop_1<=userInput;  loop_1++)
	{
		for(int loop_2=userInput;  loop_2>=loop_1;   loop_2--)
		{
			cout<<"   *    ";
		}
		cout<<endl;
		
	}
	return 0;
}
