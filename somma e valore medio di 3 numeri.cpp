#include <iostream>

using namespace std;
 
 int main()
{
	//variabili
	float num1;
	float num2;
	float num3;
	float somma;
	float vm;
	
	//dati input per il programma
	cout<<" questo programma legge 3 numeri e riporta la somma e il valore medio \n " ;
	cout<<" scrivi il primo numero \n";
	cin>>num1;
	cout<<" scrivi il secondo numero \n";
	cin>>num2;
	cout<<" scrivi il terzo numero \n";
	cin>>num3;
	
	//calcoli	
	somma= num1+num2+num3;
	vm= somma / 3;
	
	//risposte
	cout<<" questa e la somma dei 3 numeri \n";
	cout<<somma<<"\n" ;
	cout<<" questo e il valore medio dei 3 numeri \n";
	cout<<vm<<"\n";
	
 	system ("pause");
 	return 0; 	
 }
