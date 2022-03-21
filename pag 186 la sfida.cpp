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
	char d;
	char rd; 
	 
	 dfg=2;
	 dfs=-4;
	 ddg=4;
	 dds=-2;
	 dt=20;
	 p=0;
	 i=0;
	 
	for(i=0;i<=20;i++)
	{
		cout<<"difficolta domanda (accetta solo risposta facile;difficile): ";
		cin>>d;
		cout<<"\n";
		cout<<"la domanda era giusta o sbagliata? (accetta solo giusto;sbagliato): ";
		cin>>rd;
		cout<<"\n";

	if(rd=giusta)
	{
		switch(d)
		{
			case facile:
				
				p+=2;
				i+=1;
				
				break;
				
			case difficile:
				
				p+=4;
				i+=1;
				
				break;
		}
	}
	}
	else
	{
				switch(d)
		{
			case facile:
				
				p-=4;
				i+=1;
				
				break;
				
			case difficile:
				
				p-=2;
				i+=1;
				
				break;
		}
	}
	}
	
	
	system("pause");
	return 0;
}
