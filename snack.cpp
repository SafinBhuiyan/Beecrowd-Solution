#include <bits/stdc++.h>
using namespace std;
int main(){

	double p1=4.00,p2=4.50,p3=5.00,p4=2.00,p5=1.50;

	int x,y;
	cin >> x >> y;

	if (x==1)
	{
		cout << fixed << setprecision(2) << "Total: R$ " << p1*y <<endl;
	}
		else if (x==2)
		{
			cout << fixed << setprecision(2) << "Total: R$ " << p2*y <<endl;
		}
		else if (x==3)
		{
			cout << fixed << setprecision(2) << "Total: R$ " << p3*y <<endl;
		}
		else if (x==4)
		{
			cout << fixed << setprecision(2) << "Total: R$ " << p4*y <<endl;
		}
		else cout << fixed << setprecision(2) << "Total: R$ " << p5*y <<endl;

    return 0;
}
