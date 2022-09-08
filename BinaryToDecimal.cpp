/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;

    int i=0,ans=0;
    while(n !=0){
        int digit =n%10;
        if(digit==1){
            ans =ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
    
}
*/

#include<iostream>
using namespace std;
int main(){
    int n=122;
    int rev=0;

    for(int i=1;i<=n;i++){
        if(n>0){
            rev =(rev*10)+(n%10);
            n=n/10;
            
        }
        else{
            cout<<"false number ";
        }
    }
}