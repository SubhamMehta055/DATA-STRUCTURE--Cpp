 #include<iostream>
#include<stdlib.h>
#define CAPACITY 5
using namespace std;
int stack[CAPACITY],top=0 ;//take globally so we can access out of main  fun()
int main()
{
	int ch;
	void push();
void pop();
void traverse();
while(1)
{

	cout<<"\n1.push";
	cout<<"\n2.pop";
	cout<<"\n3. TRAVERSING";
	cout<<"\n4.EXIT";
	cout<<"\n enter your choice:";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			push();
			break;
			case 2:
				 pop();
				break;
				case 3:
					 traverse();
					 break;
					case 4:
						exit (0);//this must be written bcz while(1) cond is always true till we not enter the exit(0)
						
					default:
					cout<<"INVALID INPUT";
	}
}
return 0;				
				
}
void push()
{
	if(CAPACITY==top)
	{
		cout<<"\nstack is full";
	}
	else
	{
		int ele;
		cout<<"\nenter the element:";
		cin>>ele;
		stack[top]=ele;
       top++;	
	}

	
}


int pop()
{
	if(top==0)
	{
		cout<<"stack is empty";
	}
	else
	{
		int deletedItem ;
		deletedItem=stack[top];
		
		cout<<"\nthe deleted element is-"<<top;
		top--;

		
	}
	
}


void traverse()
{
	if(top==0)
	{
		cout<<"stack is empty";
	}
	else
	{
	int i;
	for(i=0;i<top;i++)
	{
		cout<<"\nthe traversing elements are:"<<stack[i];
	}
    }
}
