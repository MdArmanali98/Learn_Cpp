#include<iostream>
using namespace std;

int main()
{
    int arr[5][5], count[10];
    
    for(int i=0;i<=10;++i)
    {
         count[i]=0;
    }
    
    for(int i=0;i<10;++i)
    {
        cout<<count[i]<<' ';
    }
    
    for(int i=0;i<5;++i)
    {
        for(int j=0;j<5;++j)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<5;++i)
    {
        for(int j=0;j<5;++j)
        {
            if(arr[i][j]>=0 && arr[i][j]<=9)
            {
                count[arr[i][j]]++;
            }
        }
    }
    
    for(int i=0;i<=10;++i)
    {
        cout<<"number of "<<i<<" in matrix is: "<<count[i]<<'\n';
    }
    
    return 0;
}

