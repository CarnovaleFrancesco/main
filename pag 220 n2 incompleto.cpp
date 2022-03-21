#include <iostream>

using namespace std;

int add(double n1,double n2);
int sott(double n1,double n2);
int molt(double n1,double n2);
int div(double n1,double n2);
int leggidati(double &n1,double &n2);
int mostramenu();
int main(void)
{
	//variabili
	int scelta;
	double n1;
	double n2;
	
	system("CLS");
	scelta=mostramenu();
	
	switch(scelta)
	{
		case 1:
			
			leggidati(n1,n2);
			add(n1,n2);
			
			break;
	}
}

int mostramenu()
{
	
}

int leggidati(double &n1, double &n2)
{
	
}

int add(double n1,double n2)
{
 	//variabili 
 	int ris;
 	
 	//calcoli
 	ris=n1+n2;
 	
 	return ris;
}

int sott(double n1,double n2)
{
 	//variabili 
 	int ris;
 	
 	//calcoli
 	ris=n1-n2;
 	
 	return ris;
}

int molt(double n1,double n2)
{
 	//variabili 
 	int ris;
 	
 	//calcoli
 	ris=n1*n2;
 	
 	return ris;
}

int div(double n1,double n2)
{
 	//variabili 
 	int ris;
 	
 	//calcoli
 	ris=n1/n2;
 	
 	return ris;
}

