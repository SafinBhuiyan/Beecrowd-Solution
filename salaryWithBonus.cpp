#include <bits/stdc++.h>
using namespace std;
int main() {

        string sellerName;
        cin >> sellerName;

        double fixedSellary, totalSale, bonus;
        cin >> fixedSellary >> totalSale;

        bonus = fixedSellary+((totalSale/100)*15);

        cout << "TOTAL = R$ " << fixed << setprecision(2) << bonus <<endl;


	return 0;
}
