#include <iostream>
#include <cmath>

using namespace std;
int main()
 {
	
    float retta, m, y, q, x, contatore, punto;
    
cout<<"inserisci m";
cin>>m;
    while (m == 0) {
        cout<<" inserisci m diverso da 0";
        cin>>m;
    }
    cout<<"   inserisci q";
    cin>>q;
    x = q / m;
    cout<<"   intersezione con asse x";
    
    cout<<"  P(" << x << ",0)";
    cout<<"  intersezione con asse y";
    cout<<"  P(" << q << ",0)" ;
    for (contatore = 0; contatore <= 2; contatore++) {
        cout<<"  inserisci x";
        cin>>x;
        y = m * x + q;
        cout<<"  Punto:(" << x << "," << y << ")";
    }
    return 0;
}
