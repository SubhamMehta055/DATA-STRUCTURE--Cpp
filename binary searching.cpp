#include<iostream>
using namespace std;
int main()
{
 int a[50],i,n,first=0,last=n-1,mid,b;
 cin>>n;
 for(i=0;i<n;i++)
 cin>>a[i];
 cin>>b;
 mid = (first+last)/2;
while(first<=last)

  {

   if(a[mid]==b)
   {
   cout<<b<<"no is fond at loc: "<<mid+1;
   break;
   }

else if(a[mid]<b)
{
first=mid+1;
}
else
last=mid-1;
mid=(first+last)/2;
  }
if(first>last)
cout<<b<<"not fond";
return 0;
}
