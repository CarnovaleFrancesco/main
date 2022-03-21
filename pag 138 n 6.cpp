 #include <iostream>
 
 using namespace std;
 
 int main()
{
	cout<<"questo programma in base alla spesa da una percentuale di sconto."<<endl;

	//variabili
	float sct;
	float imp;
	float impn;
	
	//input dati
	cout<<"inserisci l' importo della spesa: ";
	cin>>imp;
	cout<<"\n";
	
	//operazioni
	if (imp<50)
	{
		sct=(imp*5)/100;
		impn= imp-sct;
		
		//risposta
		cout<<"lo sconto e' di: "<<sct<<" euro"<<endl;
		cout<<"l'importo da pagare e' di: "<<impn<<" euro"<<endl;
	}
		else 
		{
			if (imp<65)
			{
				sct=(imp*6)/100;
				impn= imp-sct;
		
				//risposta
				cout<<"lo sconto e' di: "<<sct<<" euro"<<endl;
				cout<<"l'importo da pagare e' di: "<<impn<<" euro"<<endl;
			}
				else 
				{
					if (imp<80)
					{
						sct=(imp*7)/100;
						impn= imp-sct;
		
						//risposta
						cout<<"lo sconto e' di: "<<sct<<" euro"<<endl;
						cout<<"l'importo da pagare e' di: "<<impn<<" euro"<<endl;
					}
						else 
						{
							if (imp>80)
							{
								sct=(imp*10)/100;
								impn= imp-sct;
		
								//risposta
								cout<<"lo sconto e' di: "<<sct<<" euro"<<endl;
								cout<<"l'importo da pagare e' di: "<<impn<<" euro"<<endl;
							}
						}	
				}
		}
		
	system("pause");
	return 0;
 } 
