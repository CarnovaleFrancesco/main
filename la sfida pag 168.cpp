#include <iostream>

using namespace std;

int main()
{
	int dfg;
	int dfs;
	int ddg;
	int dds;
	int dt;
	int p;
	int i;
	int ip;
	char d;
	char rd; 
	char facile;
	char difficile;
	char giusta;
	char sbagliata;
	 
	 dfg=2;
	 dfs=-4;
	 ddg=4;
	 dds=-2;
	 dt=20;
	 p=0;
	 i=0;
	 ip=0;
	 facile=0;
	 difficile=1;
	 giusta=0;
	 sbagliata=1;
	 
	 
	 for(ip=0;p<30;ip++)
	 {
	for(i=0;i<20;i++)
	{
		cout<<"difficolta domanda (accetta solo risposta facile 0;difficile 1): ";
		cin>>d;
		cout<<"\n";
		cout<<"la domanda era giusta o sbagliata? (accetta solo giusto 0;sbagliato 1): ";
		cin>>rd;
		cout<<"\n";

	if(d==0)
	{

		if(rd==0)
		{
			
			p+=2;
			i+=1;
			cout<<p<<endl;
			
		}
		
		else
		{
			p-=4;
			i+=1;
			cout<<p<<endl;
			
		}

	}
	else
	{
			
			if(rd==0)
			{
				p+=4;
				i+=1;
				cout<<p<<endl;
			
			}
			
			else
			{
				p-=2;
				i+=1;
				cout<<p<<endl;
			
			}
			
		}	
			
		
	}
	}
	
	cout<<"il punteggio totale e': "<<p<<endl;
	
	
	system("pause");
	return 0;
}
