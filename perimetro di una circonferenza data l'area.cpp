#include <iostream> 
#include <cmath>

using namespace std;

int main()

{ int area;
 	int perimetro;
 	const float  PI_GRECO = 3,1415;
	cout<<" inserisci il valore dell'area della circonferenza ";
	cin>>area;
	perimetro =  sqrt(4*PI_GRECO*area);
	cout<<"\n";
	cout<<" questo e il perimetro della circonferenza ";
	cout<<perimetro;
	
	return 0;
}
