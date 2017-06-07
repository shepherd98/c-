#include<iostream.h>
#include<stdlib.h>
#include<string.h>
class Mystring
{
	struct node
	{
		char data;
		node*next;
		node*last;
	};
	node*headd;
	node*endd;
	int n;
	public:
		Mystring()
		{
			char word;
			node*head,*end,*px,*py;
			cout<<"input a string  ending with 'e'";
			head=new(node);
			head->data=' ';
			px=new(node);
			head->next=px;
			px->last=head;
			
			while(cin>>word,word!='e')
			{
				px->data=word;
				py=new(node);
				py->last=px;
				px->next=py;
				px=py;
			}
			end=px;
			end->data='e';
			headd=head;
			endd=end;
		}
		Mystring(char a)
		{
			node*pp,*end;
			pp=new(node);
			pp->data='a';
			headd=pp;
			end=new(node);
			end->last=pp;
			end->data=' ';
			pp->next=end;
			endd=end;
			
		}
		Mystring(int n)
		{
			char string[25];
			itoa(n,string,10);
			char word;
			node*head,*end,*px,*py;
			head=new(node);
			head->data=string[0];
			px=new(node);
			head->next=px;
			px->last=head;
			for(int i=1;string[i]!=NULL;i++)
			{
				word=string[i];
				px->data=word;
				py=new(node);
				px->next=py;
				py->last=px;
				px=py;
			}
			px->data=' ';
			end=px;

			headd=head;
			endd=end;
		}
		Mystring(char*a)
		{
			int b;
			b=strlen(a);
			int i=1;
			node*head,*px,*py,*end;
			head=new(node);
			head->data=a[0];
			px=new(node);
			head->next=px;
			px->last=head;
			for(;i<b;i++)
			{
				px->data=a[i];
				py=new(node);
				px->next=py;
				py->last=px;
				px=py;
			}
			end=px;
			end->data=' ';
			endd=end;
			headd=head;
		}
 
		void display()
		{
			node*pp;
			pp=headd;
			for(int i=0;pp!=endd;i++)
			{
				cout<<pp->data;
				pp=pp->next;

			}
				cout<<endd->data<<"  length is  "<<i<<'\n';
		}
		void display2()
		{
			node*pp;
			pp=endd;
			for(int i=0;pp!=headd;i++)
			{
				cout<<pp->data;
				pp=pp->last;
			
			}
	cout<<headd->data<<"  length is  "<<i<<'\n';
		}

};
void main()
{
	Mystring a("this is mystring");
	Mystring b(123);
	Mystring c('a');
	c.display();
	c.display2();
	b.display ();
	b.display2();
	a.display();
	a.display2();
}


			
	