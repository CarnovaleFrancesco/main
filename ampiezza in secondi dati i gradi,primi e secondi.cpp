#include <iostream>

using namespace std;

int main()
{
    cout<<" questo programma calcola l'ampiezza in secondi  avendo la misura di un angolo in gradi,primi e secondi  \n";
	cout<<"ricorda 1 grado equivale a 60 primi e 1 primo equivale a 60 secondi. \n";
	
	//variabili
	float gradi;
	float primi; 
	float secondi;
	float ampiezza;
	
	//dati input
    cout<<"inserire i gradi:";
    cin>>gradi;
    cout<<"\n";
	cout<<"inserire i primi:";
	cin>>primi;
	cout<<"\n";
	cout<<"inserire i secondi:";
	cin>>secondi;
	cout<<"\n";
	
	
	//risoluzione	
	ampiezza= (gradi*60*60)+(primi*60)+(secondi);
	
	//risposta	
	cout<<"questa e' l'ampiezza in secondi: ";
	cout<<ampiezza;
	
	cout<<"\n";
	
	system("pause");
	return 0;
	
}
