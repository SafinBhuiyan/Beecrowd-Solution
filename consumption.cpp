#include <bits/stdc++.h>
using namespace std;
int main() {

        int totalDistance;
        cin >> totalDistance;

        double totalFuel;
        cin >> totalFuel;

       	double milage;
       	milage = totalDistance/totalFuel;

       	cout << fixed << setprecision(3) << milage << " km/l" << endl;
       
	return 0;
}
