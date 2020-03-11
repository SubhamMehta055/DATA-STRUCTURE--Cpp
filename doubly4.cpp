#include<iostream> //deletion in doubly
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* right;
	struct node* left;
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
	temp->right=NULL;
	temp->left=NULL;
	root=temp;
	p=root;
	for(i=1;i<n;i++)
	{
		q=new node;
		cout<<"enter the data of node"<<i+1<<":";
		cin>>q->data;
		q->right=NULL;
		q->left=NULL;
		p->right=q;
		q->left=p;
		p=q;
	}
	p=root;
	int loc;i=1;
	cout<<"enter the location to be delete:";
	cin>>loc;
	if(loc==1)
	{
		root=temp->right;
		temp->right=NULL;
		
		free(temp);
	}
	else 
	{
	
while(i<loc-1)
{
	p=p->right;
	i++;
	
}
struct node*temp1;
temp1=p->right;
p->right=temp1->right;
temp1->right=NULL;
free(temp1); //temp1 we have given name to node that to dlt so we can free that node.
}
	p=root; //for whole traversing we initialize p=root
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->right;
	}
	return 0;
}
