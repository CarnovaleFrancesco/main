#include <iostream>

using namespace std;
int mostraMenu(void);
int main(void)
{
	//variabili
	int num;
	int n;
	int n1;
	int scelta;
	int array[0];
	int i;
	
	
	system("CLS");
	scelta = mostraMenu();
	
	
	//calcolo
	do
	{
		switch (scelta)
			{
				case 1:
			
					num= coppiednumugual ()
			
					break;
				
				case 2:
			
	                
			
					break;
		
			  case 3:
			
		  
		
					break;	
		}
	}while(scelta!=0);
	
	
}

int leggidati()
{
	//variabili
	int n;
	int n1;
	
	//input dati
	n=0;
	do
	{
	cout<<"inserisci un numero:";
	cin>>n;
	}while(n!=0 && n1!=0);
	
	return n,n1;
}

int coppiednumugual(int n,int n1)
{
	int i;
	
	i=0;
	
	if(n==n1)
	{
		i+=1;
		coppiednumugual=i;
	}	
	
	return coppiednumugual;
	
}
int mostraMenu() {
  int scelta;
  do
  {
    system("CLS");
    cout << "\n\n";
    cout << ("\t\t**************************************************************************************************************************************\n");
    cout << ("\t\t*                                \tMenu' utente principale                                                                           *\n");
    cout << ("\t\t**************************************************************************************************************************************\n");
    cout << ("\t\t* 1 calcolo di coppie di numeri consecutivi uguali                                                                                   *\n");
    cout << ("\t\t* 2 calcolo di coppie in cui il secondo numero e divisore del primo (non uguali)                                                     *\n");
    cout << ("\t\t* 3 visualizzare un messaggio in cui dica quale tipo di coppie tra le due tipologie indicate  e' presente in un numero maggiore      *\n");
    cout << ("\t\t* 0 =======> USCITA                                                                                                                  *\n");
    cout << ("\t\t**********************************************************************************************************************************\n\n\n");

    cout << ("Inserire scelta (1, 2, 3  oppure 0)   :    ");
    cin >> scelta;

    if ((scelta < 0) || (scelta > 3))
    {
      cout << ("\n\nERRORE Digitare la scelta corretta.....\n\n");
      system("PAUSE");
    }
    else;
  } while ((scelta < 0) || (scelta > 3));

  return scelta;
}

