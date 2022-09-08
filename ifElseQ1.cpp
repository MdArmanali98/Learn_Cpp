/*#include<iostream>
using namespace std;
int main(){
    int a=2,b=3;
    if(a<3){
        cout<<"Condition is true : "<<endl;
    }
    else{
        cout<<"Condition is false :"<<endl;
    }
return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value : "<<endl;
    cin>>n;

    if(n>0){
        cout<<"Positive value :"<<endl;
    }
    else{
        cout<<"Negative value :"<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number A:"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the Number B:"<<endl;
    cin>>b;
    if(a<b){
        cout<<"A is lessThen "<<endl;
    }
    else{
        cout<<"B is GreterThen "<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the Number :"<<endl;
    cin>>a;

    if(a>0){
        cout<<"This is a positive Number :"<<endl;
    }
  else  if(a<0){
        cout<<"This is a negetive Number :"<<endl;
    }
    else{
        cout<<"This is Zero :"<<endl;
    }
    return 0;
    }


#include <iostream>
using namespace std;

void check(char ch)
{
	if (isupper(ch))
		cout << ch << " is an UpperCase character\n";

	else if (islower(ch))
		cout << ch << " is an LowerCase character\n";

	else
		cout << ch << " is not an aplhabetic character\n";
}

// Driver Code
int main()
{
	char ch;
	ch = 'A';

	// Check the character
	check(ch);

	// Get the character
	ch = 'a';

	// Check the character
	check(ch);

	// Get the character
	ch = '0';

	// Check the character
	check(ch);

	return 0;
	// This code is contributed by Shivesh Kumar Dwivedi
}
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    if(n%2==1){
        cout<<"is prime "<<endl;
    }
    else{
        cout<<"Not prime :"<<endl;
    }
    return 0;
}
