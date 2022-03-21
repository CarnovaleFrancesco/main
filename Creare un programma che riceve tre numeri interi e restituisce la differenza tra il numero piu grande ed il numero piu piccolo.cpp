#include <iostream>

using namespace std;

int risposta(int mag, int min);
int minore(int n,int n1,int n2);
int maggiore(int n,int n1,int n2);
int leggidati(int &n,int &n1, int &n2);
int main()
{
	//variabili
	int n;
	int n1;
	int n2;
	int mag;
	int min;
	
	leggidati(n,n1,n2);
	mag=maggiore(n,n1,n2);
	min=minore(n,n1,n2);
	risposta(mag,min);
	
	system("pause");
	return 0; 
}

int leggidati(int &n,int &n1, int &n2)
{
	
	cout<<"Inserisci il primo numero: ";
	cin>>n;
	cout<<"\n";
	cout<<"Inserisci il secondo numero: ";
	cin>>n1;
	cout<<"\n";	
	cout<<"Inserisci il terzo numero: ";
	cin>>n2;
	cout<<"\n";
	
}

int maggiore(int n,int n1,int n2)
{
	//variabili 
	int maggiore;
	
	if(n>n1)
	{
		if(n>n2)
		{
			maggiore=n;
		}
		
		else
		{
			if(n1>n2)
			{
				maggiore=n1;
			}
			else
			{
				maggiore=n2;
			}
		}
	}
	else
	{
		if(n1>n2)
		{
			if(n2>n)
			{
				maggiore=n1;
			}
			else
			{
				if(n2>n)
				{
					maggiore=n2;
				}
				else
				{
					maggiore=n1;
				}
			}
		}
		else
		{
			if(n2>n)
			{
				maggiore=n2;
			}
		}
	}
	
	return maggiore;
	
}

int minore(int n,int n1,int n2)
{
	//variabili
	int minore;
	
	if(n<n1)
	{
		if(n<n2)
		{
			minore=n;
		}
		
		else
		{
			if(n1<n2)
			{
				minore=n1;
			}
			else
			{
				minore=n2;
			}
		}
	}
	else
	{
		if(n1<n2)
		{
			if(n2<n)
			{
				minore=n1;
			}
			else
			{
				if(n2<n)
				{
					minore=n2;
				}
				else
				{
					minore=n1;
				}
			}
		}
		else
		{
			if(n2<n)
			{
				minore=n2;
			}
		}
	}
}

int risposta(int mag,int min)
{
	cout<<"il numero maggiore e': "<<mag<<endl;
	cout<<"il numero minore e': "<<min<<endl;
}
