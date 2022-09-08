/*#include<iostream>  
using namespace std;
int main(){
	int n;
	
	int arr[3][3][3][3][3];
	for(int i = 0; i<2; ++i)
	{
		for(int j = 0; j<2; ++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						cin>>arr[i][j][k][l][m];
					}
				}
			}
		}
	}
	int countzero=0;
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						if(arr[i][j][k][l][m]==0)
						{
							countzero++;
						}
					}
				}
			}
		}
	}
	int countone=0;
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						if(arr[i][j][k][l][m]==1)
						{
							countone++;
						}
					}
				}
			}
		}
	}
	int countTwo=0;
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						if(arr[i][j][k][l][m]==2)
						{
							countTwo++;
						}
					}
				}
			}
		}
	}
	int countThree=0;
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						if(arr[i][j][k][l][m]==3)
						{
							countThree++;
						}
					}
				}
			}
		}
	}
	int countFour=0;
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						if(arr[i][j][k][l][m]==4)
						{
							countFour++;
						}
					}
				}
			}
		}
	}
	int countFive=0;
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						if(arr[i][j][k][l][m]==5)
						{
							countFive++;
						}
					}
				}
			}
		}
	}
	int countsix=0;
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						if(arr[i][j][k][l][m]==6)
						{
							countsix++;
						}
					}
				}
			}
		}
	}
	int countseven=0;
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						if(arr[i][j][k][l][m]==7)
						{
							countseven++;
						}
					}
				}
			}
		}
	}
	int countEight=0;
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						if(arr[i][j][k][l][m]==8)
						{
							countEight++;
						}
					}
				}
			}
		}
	}
	int countNINE=0;
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
			{
				for(int l=0;l<2;++l)
				{
					for(int m=0;m<2;++m)
					{
						if(arr[i][j][k][l][m]==9)
						{
							countNINE++;
						}
					}
				}
			}
		}
	}
	
	
	cout<<"number of zero in array are : "<<countzero<<'\n';
	cout<<"number of one in array are : "<<countone<<'\n';
	cout<<"number of two in array are : "<<countTwo<<'\n';
	cout<<"number of three in array are : "<<countThree<<'\n';
	cout<<"number of four in array are : "<<countFour<<'\n';
	cout<<"number of five in array are : "<<countFive<<'\n';
	cout<<"number of six in array are : "<<countsix<<'\n';
	cout<<"number of seven array are : " <<countseven<<'\n';
	cout<<"number of eight in array are : "<<countEight<<'\n';
	cout<<"number of nine array are : " <<countNINE<<'\n';
	
	
return 0;
	 
	
}
	*/
	
	#include<iostream>
	using namespace std;
	int main(){
		int n;
		cin>>n;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				cout<<i<<" ";
			}cout<<endl;
		}
		return 0;
	}
	
