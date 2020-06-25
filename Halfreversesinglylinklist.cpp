#include<iostream>
using namespace std;

class node
{   public:
	int value;
	node*next;
};
class ssly
{
public:
node*head;
ssly()
{
	head=NULL;
}
void last(int val);	
void rev();
void display();
};
void ssly::last(int val)
{ 
	node *temp,*p;
	temp=new node;
	temp->value=val;
	 
	if(head==NULL)
	{
		head=temp;
		head->next=NULL;
	}

	else
	{  	p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
		temp->next=NULL;
	}
}

void ssly::rev()
{
	node*q=head;
	int count=0;
	while(q!=NULL)
	{
		q=q->next;
		count++;
	}
    node*t=head;
   for(int i=0;i<count/2-1;i++)
   { 
   	  t=t->next;
   }
   node*p,*n,*r;
   p=head;
   r=t->next;
   
   for(int i=0;i<count/2;i++)
   { 
     n=p;
   	 p=p->next;
   	 n->next=r;
   	 r=n;
    }
    head=r;
    
}
void ssly::display()
{  
	node*p=head;
	while(p!=NULL)
	{   cout<<p->value;
		p=p->next;
	}
	//cout<<head->next->next->next->value;
}
int main()
{int loopval;
ssly s;
int value;
    do
    {  cout<<"enter the value:"; 
	   cin>>value; 
	   s.last(value);
	    cout<<"if you want to run the loop again press 1:";
    	cin>>loopval;
	}while(loopval==1);
		s.rev();
		s.display();
}
