#include <iostream>

using namespace std;
 
 int main()
{
	cout<<" questo programma visualizza i 3 numeri successivi di un numero inserito "<<endl;

	//variabili
	int suc1;
	int suc2;
	int suc3;
	int num;
		
	//input dati
	cout<<" inserisci il numero: ";
	cin>>num;
	cout<<" \n "<<endl;
	
	//operazioni
	suc1 = num+1;
	suc2 = suc1 +1; 
	suc3 = suc2+1;
	
	//risposta
	cout<<" questo e' il numero inserito: "<<num<<endl;
	cout<<" questo e' il 1 numero successivo: "<<suc1<<endl;
	cout<<" questo e' il 2 numero successivo: "<<suc2<<endl;
	cout<<" questo e' il 3 numero successivo: "<<suc3<<endl;

	system("pause");
	return 0;
 } 
