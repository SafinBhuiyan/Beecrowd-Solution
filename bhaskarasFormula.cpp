#include <bits/stdc++.h>
using namespace std;
int main() {

        double a,b,c,R1,R2;
        cin >> a >> b >> c;

        R1=((-b+(sqrt((b*b)-(4*a*c))))/(2*a));

        R2=((-b-(sqrt((b*b)-(4*a*c))))/(2*a));


        if (((b * b) - 4 * a * c) < 0 || a == 0)
        {
        	cout << "Impossivel calcular"  << endl;
        }
        
        else 
        {
        	cout <<"R1 = " << fixed << setprecision(5) << R1 << endl;

        	cout <<"R2 = " << fixed << setprecision(5) << R2 << endl;
        }        	
        
	return 0;
}
