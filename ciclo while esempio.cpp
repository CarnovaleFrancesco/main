#include <iostream>

 using namespace std;
 
 int main()
 {
 	//variabili
 	int n1;
 	n1=0;
 	
 	//input dati
 	cout<<"inserisci un numero maggiore di 2:";
 	cin>>n1;
 	cout<<"\n";
 	
 	//calcolo
	while (n1>1)
	{
		n1=n1-2;
	}
	 
	//risposta
	
	if (n1==0)
	{
		cout<<"il numero e' pari"<<endl;
	}
	 else
	 	
	 	cout<<"il numero e' dispari"<<endl;
	 	
 	system ("pause");
 	return 0;
 }
