#include<iostream>
//#include<stdlib.h>
#define CAPACITY 5
using namespace std;
int queue[CAPACITY],front=0,rear=0;
int main()
{
	int ch;
	void insertion();
void deletion();
void traverse();
while(1)
{

	cout<<"\n1.QUEUE INSERTION";
	cout<<"\n2.QUEUE DELETION";
	cout<<"\n3.QUEUE TRAVERSING";
	cout<<"\n4.EXIT";
	cout<<"\n enter your choice:";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			insertion();
			break;
			case 2:
				 deletion();
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
void insertion()
{

if(CAPACITY==rear)
{
	cout<<"queue is full"; 
}
else
{
	int  element;
	cout<<"enter the element to be entered:";
	cin>>element;
	
	queue [rear]=element; //elem should be entered in q[0]
	
}
rear++; //rear would be increase by 1 after inserting one elem in queue array	
}


void deletion()
{
	if(front==rear)
	{
		cout<<"queue is empty";
		
	}
	
	else
	{int i;
		cout<<"deleted element is:"<<queue[front]<<" "; //directly we delete the front elem i.e. 0th elem is delted
		
		for(i=0;i<rear-1;i++) //rear-1 bcz last elemnt will be same as previous one so we cant over write that value
		{
			queue[i]=queue[i+1];
			
	
		}
		rear--; //rear=4 now when we take rear=5 CAP after termination of for loop
		
	}
	
	
}


void traverse()
{
	
	if(front==rear)
	{
		cout<<"queue is empty";
		
	}
	else
	{int i;
		cout<<"queue elem  after traversing:"<<endl;
		for(i=0;i<rear;i++)
		{
			cout<<"the elem at "<<i<<":"<<queue[i]<<endl;
		}
		
		
	}
}



