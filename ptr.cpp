/*#include<iostream>
using namespace std;
int main()
{
    int num=5;
    cout<<num<<" "<<&num<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={4,2,3};
    cout<<"address of first memory block is : "<<arr <<endl;
    cout<<"address of first memory block is : "<<&arr[5]<<endl;
    cout<<*arr<<endl;
    cout<<*arr + 1 <<endl;
    cout<<*(arr + 1 )<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int arr [4]={3,2,4,5};
    char ch [6]="arman";
    cout<<arr<<endl;
    cout<<ch<<endl;
}

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,2,3,4,5};
    cout<<*arr<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    
    
    int *p;
    int sum=0;
    p=arr;


cout<<"enter element : ";

for(int i=0;i<5;++i)
{
    cout<<'\n' <<*p <<endl;
    sum=sum+*p;
    p++;
}
cout<<" total number : "<<sum <<endl;
return 0;


}