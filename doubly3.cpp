#include<iostream>
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
	cout<<"enter the location:";
	cin>>loc;
	while(i<loc)
	{
		p=p->right;
		i++;
		
	}
	struct node* temp1;
	temp1=new node;
	cout<<"enter the data of new node:";
	cin>>temp1->data;
	temp1->right=NULL;
	temp1->left=NULL;
	temp1->right=p->right;
	p->right=temp1;
	temp1->left=p;

	p=root; //for whole traversing we initialize p=root
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->right;
	}
	return 0;
}
