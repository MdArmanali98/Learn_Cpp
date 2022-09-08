//write a programe to display string using linked list
// language C

#include<iostream>
//#include<malloc.h>
using namespace std;
struct node
{
    char str[30];
    struct node *next;
};
typedef struct node linked;
int main()
{
    linked *begin,node1,node2,node3,node4;
    int j;
   // printf("\n enter four word four lines :-\n");
   cout<<"Enter four word in four line :-"<<endl;
   
    begin=(struct node*)malloc(sizeof(linked));
    begin=&node1;
    gets(node1.str);
    node1.next=&node2;
    gets(node2.str);
    node2.next=&node3;
    gets(node3.str);
    node3.next=&node4;
    gets(node4.str);
    node4.next=NULL;
    
    do
    {
        begin=begin->next;
        //printf("%s",begin->str);
    
        cout<<begin->str<<endl;
    } while (begin->next!=NULL);
    
    
}
// print char a to Z
/*#include<iostream>
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
}*/



