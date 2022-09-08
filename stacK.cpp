#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack <int>s;
	s.push(8);
	s.push(9);

	s.pop();


	cout<<"Print stack element "<<s.top()<<endl;
	if(s.empty())
	{
		cout<<"stack is Empty : "<<endl;

	}
	else
	{
		cout<<"Stack is not Empty "<<endl;
	}

	return 0;
}


