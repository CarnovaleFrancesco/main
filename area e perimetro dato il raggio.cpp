#include <iostream> 

using namespace std;

int main()

{ float area;
float raggio;
 	float perimetro;
	cout<<" inserisci il valore del raggio della circonferenza ";
	cin>>raggio;
	perimetro =  (2*3,1415*raggio);
	cout<<" questo e il perimetro della circonferenza: \n ";
	cout<<perimetro <<endl ;
	area = (3,1415*raggio*raggio);
	cout<<" questa e l'area della circonferenza: \n ";
	cout<<area << endl;
	system("PAUSE");
	return 0;
}
