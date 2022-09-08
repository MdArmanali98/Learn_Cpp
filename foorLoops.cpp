/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i <<" ";
    }
    return 0;
}

//Sum
#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter the  Number :"<<endl;
    cin>>n;
    int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;
    
}
cout<<sum;

    
}


//Fibonacci 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;

    int a=0;
    int b=1;

    for(int i=1;i<=n;i++){
        int NextNumber=a+b;
        cout<<NextNumber<<" ";

        a=b;
        b=NextNumber;
    }
    return 0;

}
*/
#include<iostream>
using namespace std;
void mostRecentlyUsedApps(int *arr,int N,int K){
    int app_index=0;

    app_index = (K&N);

    int x=app_index,app_id = arr[app_index];
    while(x>0){
        arr[x]=arr[--x];
    }
    arr[0] = app_id;

    void printArray[int* arr,int N]{
        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        }
        int main(){
            int K=3;
            int arr[]={3,5,2,4,1};
            int N=sizeof(arr)/sizeof(arr[0]);

            mostRecentlyUsedApps[arr,N,K];
            printArray(arr,N);
            return 0;
        }
    }
}