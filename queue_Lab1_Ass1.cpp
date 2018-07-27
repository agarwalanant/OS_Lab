#include<iostream>

using namespace std;

class queue
{
	public:
		int rear =-1;
		int front =-1;
		int queue[10];
void enqueue(int data)
{
	if(rear > 10)
	{
		cout<<"OverFlow";
		cout<<"Rear "<<rear<<endl;
		cout<<"Front "<<front<<endl;
		
	}
	else if(front ==-1)
	{
		++rear;
		queue[rear]= data;
		++front;
		cout<<data<<" Inserted"<<endl;
		cout<<"Rear "<<rear;
		cout<<"Front "<<front;
	}
	else{
		++rear;
		queue[rear]= data;
		cout<<data<<" Inserted"<<endl;
		cout<<"Rear "<<rear<<endl;
		cout<<"Front "<<front<<endl;
	}
}

void dequeue(){
	if(front == -1 || front > rear)
	{
		cout<<"UNDERflow"<<endl;
		cout<<"Rear "<<rear<<endl;
		cout<<"Front "<<front<<endl;
	}
	cout<<queue[front]<<" Removed"<<endl;
	++front;
	cout<<"Rear "<<rear<<endl;
	cout<<"Front "<<front<<endl;
	
	
}

void publish()
{
	int i=0;
	while(true)
	{
		cout<<"Enter the number to insert "<<endl;
		cin>>queue[i];
		i++;
	}
}
	
};


int main(){
	queue q1;
	q1.enqueue(5);
	q1.enqueue(4);
	q1.enqueue(7);
	q1.dequeue();
	q1.dequeue();

	
	return 0;
}
