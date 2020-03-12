#include<iostream> //circular list insertion at the end.
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
p->link=root;

//CREATE NEW NODE TO BE ENTERED
struct node*temp2;
temp2=new node;
cout<<"enter my new node data:";
cin>>temp2->data;
temp2->link=NULL; 


//LINKING NEW NODE now temp2 at end.
		
	p->link=temp2;
	temp2->link=root;

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
