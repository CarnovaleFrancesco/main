#include <iostream>

using namespace std;
 
 int main()
{
	cout<<" questo programma visualizza il prodotto di 2 numeri in base alla regola dei segni "<<endl;

	//variabili
	int n1;
	int n2,
	prodotto;
	
	//input dati
	cout<<" inserisci il primo numero: ";
	cin>>n1;
	cout<<"\n";
	cout<<" inserisci il secondo numero: ";
	cin>>n2;
	cout<<"\n";
	
	//operazioni
	prodotto=0;
	if (n1<0){
	if (n2<0){	
	prodotto=n1+n2;
	}else {prodotto= n1+n2;}
	}else{
		if (n2<0){
			prodotto=n1+n2;
			}else{
				prodotto=n1+n2;
			}
		}
	
	//risposta
	cout<<" il prodotto dei 2 numeri e': "<<prodotto<<endl;

	system("pause");
	return 0;
 } 
