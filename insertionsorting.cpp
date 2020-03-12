#include<iostream>
using namespace std;
void inSort(int arr[],int size);
void printArr(int arr[],int size);
void sort(int arr[],int size);
int arr[10],i,j,size;
int main()
{
	cout<<"enter the size of array:"<<endl;
	cin>>size;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
		
	}
	inSort(arr,size);
	printArr(arr,size);
	sort(arr,size);
	return 0;
	
}
void inSort(int arr[],int size)
{
	int i,j,temp;
	for(i=1;i<3;i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j])&&(j>=0))
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;  
	}
	 
}
void printArr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void sort(int arr[],int size)
{
		int i,j,temp;
	for(i=1;i<size;i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j])&&(j>=0))
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;  
	}

for (i=0;i<size;i++)

{
	cout<<"\n Sorted element "<<i+1 <<": " ;
	cout<<arr[i]<<" ";
}

}
