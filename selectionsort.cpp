#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,i,j,pos,temp;
	cout<<"enter the size: "<<endl;
	cin>>n;
	cout<<"enter the ele: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	for(i=0;i<(n-1);i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[pos]>arr[j])
			{
				pos=j;
				
			}
	    }
			if(pos!=i)
			{
				temp=arr[i];
				arr[i]=arr[pos];
				arr[pos]=temp;
				
			}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
