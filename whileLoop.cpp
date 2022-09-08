/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;

    int i=1;

    while(i<=n){
        cout<<i<<" ";
        i++;
    }
    return 0;
}

// Sum
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;
    int sum=0;
    int i=1;

    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}


//Pattrn
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;
    
    int i=1;
    while(i<=n){
 
        int j=1;

        while(j<=i){
            cout<< " * " ;
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;

}

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : "<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;

    int i=1;
    int count = 1;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the Number : "<<endl;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<" * ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
 }
 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;
     int i=1;
     while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
     }
     return 0;
}


#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter the char :"<<endl;
    cin>>c;

    char i='a';

    while(i<=c){
        cout<<"*";
    }

}


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='a'+row-1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}


//      *
//     **
//    ***
//   ****  

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;

    int row=1;
    while(row<=n){
        int space =n-row; //5 -1=4  space = 4
        //space print
        while(space){
            cout<<" ";
            space--;
        }
        //Star print 
       int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}







#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
cin>>n;

int row=5;
while(row>=1){
    int col=1;
    while(col<=row){
        cout<<"* ";
        col++;
    }
    cout<<endl;
    row--;
}
}


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the NUmber :"<<endl;
    cin>>n;

    int row=1;
    while(row<=n){
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=row){
            cout<<j;
            j++;
        }
      int start = row-1;
      while(start){
        cout<<start;
        start--;
      }
      cout<<endl;
      row++;
    }
    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :"<<endl;
    cin>>n;

    int row=1;
    while(row<=n){
        int space =n-row;
        while(space){
        cout<<" ";
        space--;
        }
        int j=1;
        while(j<=row){
            cout<<j;
            j++;
        }
        int start =row-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}