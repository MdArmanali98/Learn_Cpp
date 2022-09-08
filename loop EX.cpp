#include<iostream>
using namespace std;
int main()
{
	int  loopVariable,userInput;
	
	cout<<"Enter the number : ";
	cin>>userInput;
	
	char char_variable;
	
	cin>>char_variable;
	
	for(loopVariable=1 ; loopVariable<=userInput; loopVariable++)
	{
		cout<<char_variable<<" ";
	}
	return 0;
}
