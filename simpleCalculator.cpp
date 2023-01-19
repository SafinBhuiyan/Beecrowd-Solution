#include <bits/stdc++.h>
using namespace std;
int main() {

        int productCode1, productCode2, unit1, unit2;
        double unitPrice1, unitPrice2;
        cin >> productCode1 >> unit1 >> unitPrice1;
        cin >> productCode2 >> unit2 >> unitPrice2;

        double totalPrice1, totalPrice2;
        totalPrice1 = (unitPrice1 * unit1);
        totalPrice2 = (unitPrice2 * unit2);

        double valueToPay;
        valueToPay = totalPrice1 + totalPrice2;

        cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valueToPay << endl;


	return 0;
}
