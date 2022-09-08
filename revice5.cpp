/*Given an array of size N containing only 0s,
 1s, and 2s; sort the array in ascending order
 *
 *
 Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
*/
 

#include<iostream>
using namespace std;
void printarr(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sortOne(int a[],int n){
	 int l=0,h=n-1,m=0;
        while(m<=h){
            if(a[m]==0){
            swap(a[m],a[l]);
            l++;
            m++;
            
        }else if(a[m]==1){
            m++;
        }else{
            swap(a[m],a[h]);
            h--;
        }
        }
    
	
 }
	
	

int main(){
	int arr[5]={0,2,1,2,0};
	sortOne(arr,5);
	printarr(arr,5);
	return 0;
}
