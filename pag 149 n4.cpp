#include <iostream>

using namespace std;
 
 int main()
{
	//variabili
	int ordine;
	int a;
	int b;
	int c;
	int d;
	
	//input dati
	cout<<"inserisci l'ordine dei numeri:"<<endl;
	cout<<"decrescente:0 \ncrescente:1"<<endl;
	cin>>ordine;
	
	//operazioni
	switch(ordine)
	{
		case 0:
			cout<<"inserisci il primo numero:";
			cin>>a;
			cout<<"\n";
			cout<<"inserisci il secondo numero:";
			cin>>b;
			cout<<"\n";
			cout<<"inserisci il terzo numero:";
			cin>>c;
			cout<<"\n";
			cout<<"inserisci il quarto numero:";
			cin>>d;
			cout<<"\n";
			
			if ((a>b)&&(a>c)&&(a>d))
			{
				if ((b>c)&&(b>d))
				{
					if (c>d)
					{
						cout<<"l'ordine e':"<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
					}
					else
						
						if (d>c)
						{
							cout<<"l'ordine e':"<<a<<" "<<b<<" "<<d<<" "<<c<<endl;
						}	
				}
				else
				
					if ((c>b)&&(c>d))
					{
						if (b>d)
						{
							cout<<"l'ordine e':"<<a<<" "<<c<<" "<<b<<" "<<d<<endl;
						}	
					}
					else 
					
						if((d>c)&&(d>b))
						{
							if (c>b)
							{
							cout<<"l'ordine e':"<<a<<"; "<<d<<"; "<<c<<"; "<<b<<endl;
							}
							else
							
								if (b>c)
								 {
								 	cout<<"l'ordine e':"<<a<<";"<<d<<"; "<<b<<"; "<<c<<endl;
								 }
						}
				
			}
			else
			
			  if ((b>a)&&(b>c)&&(b>d))
				{
			  		if ((a>c)&&(a>d))
			  		{
			  			if(c>d)
			  			{
			  				cout<<"l'ordine e':"<<b<<" "<<a<<" "<<" "<<c<<" "<<d<<endl;
						}
						else
						
							if (d>c)
							{
								cout<<"l'ordine e':"<<b<<" "<<a<<" "<<d<<" "<<c<<endl;
							}
					}
					else
					
						if ((c>a)&&(c>d))
						{
							if (a>d)
							{
								cout<<"l'ordine e':"<<b<<" "<<c<<" "<<a<<" "<<d<<endl;
							}
							else 
							
								if (d>a)
								{
									cout<<"l'ordine e':"<<b<<"; "<<c<<"; "<<d<<"; "<<a<<endl;
								}
						}
						else 
						
							if ((d>c)&&(d>a))
							{
								if (c>a)
								{
									cout<<"l'ordine e':"<<b<<"; "<<d<<"; "<<c<<"; "<<a<<endl;
								}
								else
								
									if (a>c)
									{
										cout<<"l'ordine e':"<<b<<"; "<<d<<"; "<<a<<"; "<<c<<endl;
									}
							}
				
					
				}
				else
				
					if ((c>a)&&(c>b)&&(c>d))
					{
						if ((a>b)&&(a>d))
						{
							if (b>d)
							{
								cout<<"l'ordine e':"<<c<<" "<<a<<" "<<b<<" "<<d<<endl;
							}
							else
								
								if (d>b)
								{
									cout<<"l'ordine e':"<<c<<"; "<<a<<"; "<<d<<"; "<<b<<endl;
								}
						}
						 else
						 
						 	if ((b>a)&&(b>d))
						 	{
						 		if (a>d)
						 		{
						 			cout<<"l'ordine e':"<<c<<"; "<<b<<"; "<<a<<"; "<<d<<endl;
								}
								else 
								
									if (d>a)
									{
										cout<<"l'ordine e':"<<c<<"; "<<b<<"; "<<d<<"; "<<a<<endl;
									}
							}
							else
								
								if ((d>a)&&(d>b))
								{
									if (b>a)
									{
										cout<<"l'ordine e':"<<c<<"; "<<d<<"; "<<b<<"; "<<a<<endl;
									}
								}
					}
					else
					
						if ((d>a)&&(d>b)&&(d>c))
						{
							if ((a>b)&&(a>c))
							{
								if (b>c)
								{
									cout<<"l'ordine e':"<<d<<"; "<<a<<"; "<<b<<"; "<<c<<endl;
								}
								else
								
									if (c>b)
									{
										cout<<"l'ordine e':"<<d<<"; "<<a<<"; "<<c<<"; "<<b<<endl;
									}
							}
							else 
							
								if((b>a)&&(b>c))
								{
									if (a>c)
									{
										cout<<"l'ordine e':"<<d<<"; "<<b<<"; "<<a<<"; "<<c<<endl;
									}
									else
									
										if(c>a)	
										{
											cout<<"l'ordine e':"<<d<<"; "<<b<<"; "<<c<<"; "<<a<<endl;
										}
								}
								else
								
									if ((c>a)&&(c>b))
									{
										if (a>b)
										{
											cout<<"l'ordine e':"<<d<<"; "<<c<<"; "<<a<<"; "<<b<<endl;
										}
										else
										
											if(b>a)
											{
												cout<<"l'ordine e':"<<d<<"; "<<c<<"; "<<b<<"; "<<a<<endl;
											}
									}
						}
			break;
			
		case 1:
			cout<<"inserisci il primo numero:";
			cin>>a;
			cout<<"\n";
			cout<<"inserisci il secondo numero:";
			cin>>b;
			cout<<"\n";
			cout<<"inserisci il terzo numero:";
			cin>>c;
			cout<<"\n";
			cout<<"inserisci il quarto numero:";
			cin>>d;
			cout<<"\n";
			
			if ((a>b)&&(a>c)&&(a>d))
			{
				if ((b>c)&&(b>d))
				{
					if (c>d)
					{
						cout<<"l'ordine e':"<<d<<" "<<c<<" "<<b<<" "<<a<<endl;
					}
					else
						
						if (d>c)
						{
							cout<<"l'ordine e':"<<c<<" "<<d<<" "<<b<<" "<<a<<endl;
						}	
				}
				else
				
					if ((c>b)&&(c>d))
					{
						if (b>d)
						{
							cout<<"l'ordine e':"<<d<<" "<<b<<" "<<c<<" "<<a<<endl;
						}	
					}
					else 
					
						if((d>c)&&(d>b))
						{
							if (c>b)
							{
							cout<<"l'ordine e':"<<b<<"; "<<c<<"; "<<d<<"; "<<a<<endl;
							}
							else
							
								if (b>c)
								 {
								 	cout<<"l'ordine e':"<<c<<";"<<b<<"; "<<d<<"; "<<a<<endl;
								 }
						}
				
			}
			else
			
			  if ((b>a)&&(b>c)&&(b>d))
				{
			  		if ((a>c)&&(a>d))
			  		{
			  			if(c>d)
			  			{
			  				cout<<"l'ordine e':"<<d<<" "<<c<<" "<<" "<<a<<" "<<b<<endl;
						}
						else
						
							if (d>c)
							{
								cout<<"l'ordine e':"<<c<<" "<<d<<" "<<a<<" "<<b<<endl;
							}
					}
					else
					
						if ((c>a)&&(c>d))
						{
							if (a>d)
							{
								cout<<"l'ordine e':"<<d<<" "<<a<<" "<<c<<" "<<b<<endl;
							}
							else 
							
								if (d>a)
								{
									cout<<"l'ordine e':"<<a<<"; "<<d<<"; "<<c<<"; "<<b<<endl;
								}
						}
						else 
						
							if ((d>c)&&(d>a))
							{
								if (c>a)
								{
									cout<<"l'ordine e':"<<a<<"; "<<c<<"; "<<d<<"; "<<b<<endl;
								}
								else
								
									if (a>c)
									{
										cout<<"l'ordine e':"<<c<<"; "<<a<<"; "<<d<<"; "<<b<<endl;
									}
							}
				
					
				}
				else
				
					if ((c>a)&&(c>b)&&(c>d))
					{
						if ((a>b)&&(a>d))
						{
							if (b>d)
							{
								cout<<"l'ordine e':"<<c<<" "<<a<<" "<<b<<" "<<d<<endl;
							}
							else
								
								if (d>b)
								{
									cout<<"l'ordine e':"<<c<<"; "<<a<<"; "<<d<<"; "<<b<<endl;
								}
						}
						 else
						 
						 	if ((b>a)&&(b>d))
						 	{
						 		if (a>d)
						 		{
						 			cout<<"l'ordine e':"<<d<<"; "<<a<<"; "<<b<<"; "<<c<<endl;
								}
								else 
								
									if (d>a)
									{
										cout<<"l'ordine e':"<<a<<"; "<<d<<"; "<<b<<"; "<<c<<endl;
									}
							}
							else
								
								if ((d>a)&&(d>b))
								{
									if (b>a)
									{
										cout<<"l'ordine e':"<<a<<"; "<<b<<"; "<<d<<"; "<<c<<endl;
									}
								}
					}
					else
					
						if ((d>a)&&(d>b)&&(d>c))
						{
							if ((a>b)&&(a>c))
							{
								if (b>c)
								{
									cout<<"l'ordine e':"<<c<<"; "<<b<<"; "<<a<<"; "<<d<<endl;
								}
								else
								
									if (c>b)
									{
										cout<<"l'ordine e':"<<b<<"; "<<c<<"; "<<a<<"; "<<d<<endl;
									}
							}
							else 
							
								if((b>a)&&(b>c))
								{
									if (a>c)
									{
										cout<<"l'ordine e':"<<c<<"; "<<a<<"; "<<b<<"; "<<d<<endl;
									}
									else
									
										if(c>a)	
										{
											cout<<"l'ordine e':"<<a<<"; "<<c<<"; "<<b<<"; "<<d<<endl;
										}
								}
								else
								
									if ((c>a)&&(c>b))
									{
										if (a>b)
										{
											cout<<"l'ordine e':"<<b<<"; "<<a<<"; "<<c<<"; "<<d<<endl;
										}
										else
										
											if(b>a)
											{
												cout<<"l'ordine e':"<<a<<"; "<<b<<"; "<<c<<"; "<<d<<endl;
											}
									}
						}
			break;
	}

	system("pause");
	return 0;
 } 
