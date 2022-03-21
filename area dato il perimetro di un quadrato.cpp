#include <iostream>

 using namespace std;
 
 int main ()
 {
 	//variabili
 	float perimetro;
 	float area;
 	float lato;
 	
 	//dati input del programma
 	cout<<"questo programma calcola l'area di un quadrato dato il perimetro. \n";
 	cout<<"inserisci il perimetro del quadrato: \n";
 	cin>>perimetro;
	cout<<"\n";

 	//calcoli
 	lato = perimetro/4;
 	area=lato*lato;
 	
 	//risposte
 	cout<<"questa e l'area del quadrato \n";
 	cout<<area<<"\n";
 	
 	system("pause");
 	return 0;
 }
