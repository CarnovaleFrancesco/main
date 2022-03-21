#include <iostream>

using namespace std;

int main()
{
	cout<<"\t"<<"questo programma "<<endl;
	
	//variabili
	float sct10;
	float sct20;
	float imp;
	float r;
	float diff;
	float sct;
	float impdp;
	
	
	//input dati
	cout<<"inserisci l'importo totale: ";
	cin>>imp;
	
	//calcolo
	if (imp>300)
	{
		r=imp-300;
		diff=imp-r;
		sct10=(diff*10)/100;
		sct20=(r*20)/100;
		sct=sct10+sct20;
		impdp=imp-sct;
		
		//risposta
		cout<<"il prezzo da pagare e': "<<impdp<<" euro"<<endl;
		cout<<"lo sconto e' di: "<<sct<<" euro"<<endl;
	}
	else
	{
		sct10=(imp*10)/100;
		impdp=imp-sct10;
		
		//risposta
		cout<<"il prezzo da pagare e' di: "<<impdp<<" euro"<<endl;
		cout<<"lo sconto e' di: "<<sct10<<" euro"<<endl;
	}
	
	
	system("pause");
	return 0;
}
