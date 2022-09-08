/*#include<iostream>
using namespace std;
void fun(int ,int);
int main()
{
    int i=5,j=2;
    fun(i,j);
    cout<<i<<'\n'<<j;
    return 0;
}
void fun(int i,int j)
{
    i=i*i;
    j=j*j;
}


#include<iostream>
using namespace std;
int main()
{
    int i=5, *j,  **k;
    j=&i;
    k=&j;
    cout<<i<<'\n'<<*j<<'\n'<<**k<<endl;

}

#include<iostream>
using namespace std;
int main()
{
    int i=5,*x;
    float j =5.1,*y;
    char k= 'a',*z;

    cout<<i<<'\n'<<j<<'\n'<<k<<endl;

    cout<<&x<<'\n'<<&y<<'\n'<<&z<<'\n'<<endl;
    x++;y++;z++;

cout<<x<<'\n'<<y<<'\n'<<z<<endl;
return 0;
    
    }

#include<iostream>
using namespace std;
int main()
{
    int i=5,*x;
    cout<<x<<endl;
    
    
}

#include<iostream>
using namespace std;
int main()
{
    int num[]={24,34,12,44,56,17};
    for(int i=0;i<=5;++i)
    {
        cout<<&num[i]<<" "<<endl;
        cout<<num[i]<<" "<<*(num+1)<<endl;
        cout<<*(i+num)<<" "<<i[num]<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int arr[4][2]={
		{1234,56},
		{1212,33},
		{1434,80},
		{1312,78},
	};
	
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		{
		
		cout<<*(*(s+i)+j));
		//cout<<'\n';
	}
	cout<<'\n';
	}
		
		return 0;
		
		
	}

    #include<iostream>
    using namespace std;
    int main()
    {
        int a=10;
       int *p;
       p=&a;
        cout<< p<<endl;
    }
    #include<iostream>
    using namespace std;
    int main()
    {
        int n[3][3]=
        {
            2,4,3,
            6,8,5,
            3,5,1
        };
        cout<<n,n[1][1],n[2][2];

    }
	*/
     
     #include<iostream>
     using namespace std;
     int main()
     {
         int a=5;
         int *p;
         p=&a;
         cout<<p<<endl;
     }



