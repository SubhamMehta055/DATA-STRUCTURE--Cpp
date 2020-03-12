#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* link;
};
struct node*root;
int main()
{
	struct node*temp,*p,*q;
	int i,n;
	cout<<"enter the number of nodes:";
	cin>>n;
	temp=new node;
	cout<<"enter the data of node 1:";
	cin>>temp->data;
	temp->link=NULL;
	root=temp;
	p=root;
	for(i=1;i<n;i++)
	{
		q=new node;
		cout<<"enter the data of node"<<i+1<<":";
		cin>>q->data;
		q->link=NULL;
		
		p->link=q;
	
		p=q;
	}
p->link=root; //linking the last node of link with first node
int loc;
cout<<"enter the loc to be delete:";
cin>>loc;
if(loc==1)
{
	root=temp->link;
	temp->link=NULL;
	q->link=root;
	free(temp);
}

else if (loc>1)
{p=root;
i=1;
struct node*temp1;
	while(i<loc-1)
	{
		p=p->link;
		i++;
	}
temp1=p->link;
p->link=temp1->link;
temp1->link=NULL;
free(temp1);
}

	 //for whole traversing we initialize p=root
	 p=root;
	while(p->link!=root)//p->link is necessary in circular list
	{
		cout<<p->data;
		p=p->link;
	}
cout<<p->data;//this for last data of node which contain  root value
	return 0;
}
