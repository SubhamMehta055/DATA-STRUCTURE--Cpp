#include<iostream> //add at beg in doubly
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
		p->right=q; //p is always use for traversing in linking of nodes
		q->left=p;
		p=q;
	}
	struct node* temp1;
	temp1=new node;
	cout<<"enter the data of new node:";
	cin>>temp1->data;
	temp1->right=NULL;
	temp1->left=NULL;
	temp1->right=root;
	temp->left=temp1;
	root=temp1;
	p=root;//p is traversing for dispalying elements
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->right;
	}
	return 0;
}
