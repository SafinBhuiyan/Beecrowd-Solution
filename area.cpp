#include <bits/stdc++.h>
using namespace std;
int main() {

       double A , B , C;
       cin >> A >> B >> C;

       double areaOfRectangledTriangle;
       areaOfRectangledTriangle = (0.5*(A * C));

       double areOfRadiusCircle;
       areOfRadiusCircle = (3.14159*(C * C));

       double areaOfTrapezium;
       areaOfTrapezium = (0.5*(A + B)* C); 

       double areaOfSquare;
       areaOfSquare = B * B;

       double areaOfRectangle;
       areaOfRectangle = A * B;

       cout << "TRIANGULO: " << fixed << setprecision(3) << areaOfRectangledTriangle << endl;
       cout << "CIRCULO: " << fixed << setprecision(3) << areOfRadiusCircle << endl;
       cout << "TRAPEZIO: " << fixed << setprecision(3) << areaOfTrapezium << endl;
       cout<< "QUADRADO: " << fixed << setprecision(3) << areaOfSquare << endl;
       cout<< "RETANGULO: " << fixed << setprecision(3) << areaOfRectangle << endl;
       
	return 0;
}
