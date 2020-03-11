#include<iostream>
using namespace std;
int main()
{
   int a[50],i,n,ctr,b;
   cout<<"Enter the size : ";
   cin>>n;
   for(i=0;i<n;i++)
   {
   cout<<"Enter the array elements : ";
   cin>>a[i];
   }
   cout<<"Enter the no : ";
   cin>>b;
   for(i=0;i<n;i++)
   {
     if(a[i]==b)
     ctr++;
   }

   if(ctr>0)
   {
   cout<<"The no is found ";
   }
   else
   {
   cout<<"not found";
   }
   return 0;
}
