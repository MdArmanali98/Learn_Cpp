// print char a to Z

#include<iostream>
using namespace std;

int main()
{
    
    char arr[5][5]; int count[26];
    
    for(char i=97;i<=122;++i)
    {
        count[i]=0;
    }
    
    for(char i=97;i<=122;++i)
    {
        cout<<count[i]<<' ';
    }
    
    for(char i=0;i<5;++i)
    {
        for(char j=0;j<5;++j)
        {
            cin>>arr[i][j];
        }
    }
    
    for(char i=0;i<5;++i)
    {
        for(char j=0;j<5;++j)
        {
            if(arr[i][j]>='a' && arr[i][j]<='z')
            {
                count[arr[i][j]]++;
            }
        }
    }
    
    for(char i=97;i<=122;++i)
    {
        cout<<"number of "<<i<<" in matrix is: "<<count[i]<<'\n';
    }
    
    return 0;
}

