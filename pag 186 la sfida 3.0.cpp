#include <iostream>

using namespace std;

int main()
{
	int dt;
	int p;
	int i;
	int ip;
	int d;
	int rd; 
	
	 d=0;
	 rd=0;
	 dt=20;
	 p=0;
	 i=0;
	 ip=0;
	 
	 for(ip=0;p<30;ip++)
	 {
	do
	{
		cout<<"difficolta domanda (accetta solo risposta facile 0;difficile 1): ";
		cin>>d;
		cout<<"\n";
		cout<<"la domanda era giusta o sbagliata? (accetta solo giusto 0;sbagliato 1): ";
		cin>>rd;
		cout<<"\n";

	switch(d)
	{
	
		case 0:
			if(rd==0)
		{
			
			p+=2;
			cout<<p<<endl;
			
		}
		
		else
		{
			p-=4;
			cout<<p<<endl;
			
		}
		break;
			
		case 1:
			if(rd==0)
			{
				p+=4;
				cout<<p<<endl;
			
			}
			
			else
			{
				p-=2;
				cout<<p<<endl;
			
			}
			break;
	}
	}while(i<20);
	}
	
	
	system("pause");
	return 0;
}
